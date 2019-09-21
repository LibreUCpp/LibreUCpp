import os
import argparse
import jinja2
from parse_svd import parse_svd

SCRIPT_DIR = os.path.dirname(__file__)
BASE_DIR = os.path.join(SCRIPT_DIR, "../..")
SVD_DIR = os.path.join(SCRIPT_DIR, "../../svd")

PERIPH_RENAMES_ATSAM = {
    "PAC0": "PAC",
    "SERCOM0": "SERCOM",
    "TC0": "TC",
    "TC1": "TC",
    "TCC0": "TCC",
    "ADC0": "ADC",
    "CAN0": "CAN",
}

PERIPH_RENAMES_STM32 = {
    "GPIOA": "GPIO",
    "USART1": "USART",
    "UART4": "UART",
    "UART5": "UART",
    "SPI1": "SPI",
    "I2S2ext": "SPI",
    "I2C1": "I2C",
    "CAN1": "CAN",
    "DMA1": "DMA",
    "SAI1": "SAI",
    "Flash": "FLASH"
}

PERIPH_RENAMES_STM32F4 = dict(PERIPH_RENAMES_STM32)
PERIPH_RENAMES_STM32F4.update({"ADC1": "ADC"})

# TODO this config is not well-suited any more. YAML?
# TODO dynamic assign of HEAP/STATIC/STACK sizes?
CONTROLLERS = [
    ('ATSAMD09', 'ATSAMD09C13A.svd', "M0PLUS", PERIPH_RENAMES_ATSAM, 
        ['ATSAM', 'ATSAMD', 'ATSAMD09'],
        [
            ('ATSAMD09X13', 0,   8*1024, 0x20000000, 4*1024, 3*1024, 512),
            ('ATSAMD09X14', 0,  16*1024, 0x20000000, 4*1024, 3*1024, 512),
        ]
    ),
    ('ATSAMC21', 'ATSAMC21N17A.svd', "M0PLUS", PERIPH_RENAMES_ATSAM, 
        ['ATSAM', 'ATSAMC', 'ATSAMC21'],
        [
            ('ATSAMC21X15', 0,  32*1024, 0x20000000,  4*1024,    2560, 512),
            ('ATSAMC21X17', 0, 128*1024, 0x20000000, 16*1024, 14*1024, 768),
            ('ATSAMC21X16', 0,  64*1024, 0x20000000,  8*1024,  6*1024, 768),
            ('ATSAMC21X18', 0, 256*1024, 0x20000000, 32*1024, 30*1024, 768),
        ]
    ),
    ('STM32F030', 'STM32F030.svd',   "M0", PERIPH_RENAMES_STM32, ['STM32', 'STM32F0', 'STM32F030', 'STM32_GPIO_HAS_BRR'], [
        ('STM32F030X4', 0x08000000,  16*1024, 0x20000000,  4*1024,    2560, 512),
        ('STM32F030X6', 0x08000000,  32*1024, 0x20000000,  4*1024,    2560, 512),
        ('STM32F030X8', 0x08000000,  64*1024, 0x20000000,  8*1024,  6*1024, 768),
        ('STM32F030XC', 0x08000000, 256*1024, 0x20000000, 32*1024, 30*1024, 768),
    ]),
    ('STM32F072', 'STM32F072x.svd',  "M0", PERIPH_RENAMES_STM32, ['STM32', 'STM32F0', 'STM32F072'], []),
    ('STM32F103', 'STM32F103xx.svd', "M3", PERIPH_RENAMES_STM32, ['STM32', 'STM32F1', 'STM32F103'], []),
    ('STM32F107', 'STM32F107xx.svd', "M3", PERIPH_RENAMES_STM32, ['STM32', 'STM32F1', 'STM32F107'], []),
    ('STM32F407', 'STM32F407.svd',   "M4", PERIPH_RENAMES_STM32F4, ['STM32', 'STM32F4', 'STM32F407'], [
        ('STM32F407XE', 0x08000000,  512*1024, 0x20000000, 128*1024, 120*1024, 3*1024), ## TODO 64KB CCM @ 0x10000000
        ('STM32F407XG', 0x08000000, 1024*1024, 0x20000000, 128*1024, 120*1024, 3*1024), ## TODO 64KB CCM @ 0x10000000
    ]),
    ('STM32F446', 'STM32F446x.svd',  "M4", PERIPH_RENAMES_STM32F4, ['STM32', 'STM32F4', 'STM32F446'], []),
]

def GeneratePeripheralLib(jinja_env, svd_file, cpu, variants, lib_name, renames, definitions, base_dir):
    dev = parse_svd(svd_file)

    for p in dev.peripherals:
        p.unified_name = renames.get(p.name, p.name)

    ns_periph = ['LibreUCpp', 'Peripherals']
    periph_dir = os.path.join(base_dir, 'Peripherals', lib_name)
    periph_include_dir = os.path.join(*([periph_dir, 'include'] + ns_periph))
    periph_src_dir = os.path.join(periph_dir, 'src')
    periph_ld_dir = os.path.join(periph_dir, 'ld')
    os.makedirs(periph_include_dir, exist_ok=True)
    os.makedirs(periph_src_dir, exist_ok=True)
    os.makedirs(periph_ld_dir, exist_ok=True)
    
    context = dict(
        dev=dev, 
        library_name=lib_name,
        lib_settings='LIBREUCPP_SETTINGS_'+lib_name,
        lib_periph='LIBREUCPP_PERIPH_'+lib_name,
        lib_startup='LIBREUCPP_STARTUP_'+lib_name,
        cpu=cpu, 
        definitions=definitions
    )

    tpl_cmake = jinja_env.get_template('Peripherals/CMakeLists.txt.tpl')
    tpl_cmake.stream(context, include_dir=os.path.join(*(['include']+ns_periph))).dump(os.path.join(periph_dir, "CMakeLists.txt"))

    tpl_periph = jinja_env.get_template('Peripherals/Peripheral.tpl')
    for p in dev.peripherals:
        filename = p.unified_name + ".h"
        tpl_periph.stream(context, periph=p, namespaces=ns_periph).dump(os.path.join(periph_include_dir, filename))

    tpl_interrupts = jinja_env.get_template('Peripherals/InterruptVectors.cpp.tpl')
    tpl_interrupts.stream(context, namespaces=ns_periph).dump(os.path.join(periph_src_dir, "InterruptVectors.cpp"))

    tpl_ld = jinja_env.get_template('Peripherals/ldscript.ld')
    for name, rom_base, rom_size, ram_base, ram_size, heap_size, stack_size in variants:
        tpl_ld.stream(
            context, 
            rom_base=rom_base, 
            rom_size=rom_size, 
            ram_base=ram_base, 
            ram_size=ram_size, 
            heap_size=heap_size,
            stack_size=stack_size
        ).dump(os.path.join(periph_ld_dir, name+".ld"))

    
if __name__ == '__main__':
    loader = jinja2.FileSystemLoader(os.path.join(os.path.dirname(__file__), 'templates'))
    jinja_env = jinja2.Environment(loader=loader)

    for lib_name, svd_filename, cpu, renames, definitions, variants in CONTROLLERS:
        svd_file = os.path.join(SVD_DIR, svd_filename)
        GeneratePeripheralLib(jinja_env, svd_file, cpu, variants, lib_name, renames, definitions, BASE_DIR)
