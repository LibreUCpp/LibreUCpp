from cmsis_svd.parser import SVDParser
from models import Device, Peripheral, RegisterCluster, Register, Field
from xml.dom import minidom

def parse_svd(svd_file):
    svd = SVDParser.for_xml_file(svd_file)
    xml = minidom.parse(svd_file)
    return parse_device(svd.get_device(), xml)

    
def get_text_value(parent, tag_name):
    return parent.getElementsByTagName(tag_name)[0].firstChild.data

def parse_device(svddev, xml):
    dev = Device(svddev.name)

    for p in svddev.peripherals:
        dev.add_peripheral(parse_peripheral(p))
        dev.consolidate()
        
    interrupts = [(get_text_value(node, "name"), int(get_text_value(node, "value"))) for node in xml.getElementsByTagName("interrupt")]
    for name, value in interrupts:
        dev.add_interrupt(value, name)

    return dev


def parse_peripheral(p):
    df = p.get_derived_from()
    if df:        
        retval = Peripheral.from_other(p.name, p._base_address, parse_peripheral(df))
    else:
        retval = Peripheral(p.name, p.base_address)

    if p.clusters:
        if len(p.clusters)==1:
            c = p.clusters[0]
            for i in range(c.dim):
                retval.add_base_address(p.base_address + c.address_offset + i * c.dim_increment)
            for r in c.register:
                retval.add_register(parse_register(r))
        else:
            for cluster in p.clusters:
                retval.add_cluster(parse_cluster(cluster))        
    else:
        processed_registers = []
        for ra in p.register_arrays:
            retval.add_register(parse_register(ra))
            processed_registers += [r.address_offset for r in ra.registers]

        for r in p.registers:
            if r.address_offset not in processed_registers:
                retval.add_register(parse_register(r))

    retval.cleanup_names()
    return retval


def parse_cluster(c):
    retval = RegisterCluster(c.name)
    for r in c.registers:
        retval.add_register(parse_register(r))
    return retval


def parse_register(r):
    name = r.name.replace('%s','').replace('[]','').strip('_')
    dim = r.dim if 'dim' in r.__dict__ else 1
    retval = Register(r.address_offset, name, r.description, r.size, dim)
    for f in r.fields:
        retval.add_field(parse_field(f))
    return retval


def parse_field(f):
    name = f.name.strip('_')
    description = ' '.join(f.description.split()) if f.description else ''
    return Field(name=name, bit_offset=f.bit_offset, bit_width=f.bit_width, description=description)
