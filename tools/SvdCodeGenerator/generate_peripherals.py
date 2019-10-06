import os
import argparse
import jinja2
import yaml
import humanfriendly
from parse_svd import parse_svd

SCRIPT_DIR = os.path.dirname(__file__)
BASE_DIR = os.path.join(SCRIPT_DIR, "../..")
SVD_DIR = os.path.join(SCRIPT_DIR, "../../svd")

def parse_size(s):
    try:
        return int(s)
    except ValueError:
        return humanfriendly.parse_size(s, binary=True)

# TODO dynamic assign of HEAP/STATIC/STACK sizes?

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
    if variants:
        for name, variant in variants.items():
            tpl_ld.stream(
                context,
                rom_base=int(variant['rom']['base']), 
                rom_size=parse_size(variant['rom']['size']), 
                ram_base=int(variant['ram']['base']), 
                ram_size=parse_size(variant['ram']['size']), 
                heap_size=parse_size(variant['heap']),
                stack_size=parse_size(variant['stack']),
            ).dump(os.path.join(periph_ld_dir, name+".ld"))
    
if __name__ == '__main__':
    loader = jinja2.FileSystemLoader(os.path.join(os.path.dirname(__file__), 'templates'))
    jinja_env = jinja2.Environment(loader=loader)

    with open(os.path.join(os.path.dirname(__file__),"controllers.yml"), 'r') as stream:
        controllers = yaml.safe_load(stream)
        for controller_name, controller in controllers.items():
            GeneratePeripheralLib(
                jinja_env, 
                os.path.join(SVD_DIR, controller['svd']), 
                controller['cpu'], 
                controller['variants'], 
                controller_name, 
                controller['renames'], 
                controller['definitions'], 
                BASE_DIR
            )
