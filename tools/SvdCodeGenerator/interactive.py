import sys
from cmsis_svd.parser import SVDParser

parser = SVDParser.for_xml_file(sys.argv[1])
dev = parser.get_device()
adc = dev.peripherals[0]
port = dev.peripherals[13]
sercom0 = dev.peripherals[16]

def peripherals():
    for i in range(len(dev.peripherals)):
        print(i, dev.peripherals[i].name)

def p(peripheral_name):
    return next(p for p in dev.peripherals if p.name==peripheral_name)
