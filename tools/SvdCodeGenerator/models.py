import math


def lists_equivalent(l1, l2):
    return len(l1)==len(l2) and all([a.is_equivalent(b) for a, b in zip(l1, l2)])


class Device:
    def __init__(self, name):
        self.name = name
        self.peripherals = []
        self.interrupts = {}

    def add_peripheral(self, p):
        self.peripherals.append(p)

    def add_interrupt(self, num, name):
        self.interrupts[num] = Interrupt(num, name)

    def overall_num_interrupts(self):
        return 17 + max(self.interrupts.keys())

    def iter_interrupts(self):
        for num in range(0, max(self.interrupts.keys())+1):
            yield self.interrupts.get(num, Interrupt(num, name=None))

    def consolidate(self):
        self.peripherals = self.consolidate_peripherals(self.peripherals)

    @staticmethod
    def consolidate_peripherals(peripherals):
        consolidated_list = []
        for new_p in sorted(peripherals, key=lambda a: a.name):
            try:
                equivalent = next(p for p in consolidated_list if new_p.is_equivalent(p))
                equivalent.add_alias(new_p)
            except StopIteration:
                consolidated_list.append(new_p)
        return consolidated_list


class Interrupt:
    def __init__(self, num, name):
        self.num = num
        if name:
            self.name = name
            self.handler = name + "_Handler";
            self.is_placeholder = False
        else:
            self.name = 'reserved'
            self.handler = '0'
            self.is_placeholder = True
            

class RegisterContainer:
    def __init__(self):
        self.registers = []

    def is_equivalent(self, other):
        return lists_equivalent(self.sorted_registers(), other.sorted_registers())
    
    def add_register(self, reg):
        # some SVDs derive registers via derived_from, some define registers anew, some do both
        if not any([r.address_offset==reg.address_offset for r in self.registers]):
            self.registers.append(reg)

    def sorted_registers(self):
        return sorted(self.registers, key=lambda a: a.address_offset)
    
    def size(self):
        if len(self.registers)==0:
            return 0
        else:
            lastreg = self.sorted_registers()[-1]
            return lastreg.address_offset + lastreg.size_bytes()

    def iter_registers(self):
        bytepos = 0
        padding_index = 0
        for r in self.sorted_registers():
            padding_bytes = r.address_offset - bytepos
            if padding_bytes:
                padding_index += 1
            yield r, padding_index, padding_bytes
            bytepos = r.address_offset + r.size_bytes()

    def cleanup_names(self):
        names = [r.name for r in self.registers]
        for r in self.registers:
            if r.name.endswith('0'):
                name = r.name[:-1]
                if (name + '1') not in names:
                    r.name = name


class Peripheral(RegisterContainer):
    def __init__(self, name, base_addr):
        super().__init__()
        self.name = name
        self.clusters = []
        self.base_addr = set([base_addr])
        self.aliases = []

    @staticmethod
    def from_other(name, base_addr, other):
        new = Peripheral(name, base_addr)
        new.registers = other.registers
        new.clusters = other.clusters
        return new

    def update(self, name, base_addr):
        self.name = name
        self.base_addr = set([base_addr])

    def add_base_address(self, addr):
        self.base_addr.add(addr)

    def add_cluster(self, cluster):
        self.clusters.append(cluster)

    def add_alias(self, alias):
        self.aliases.append(alias)

    def iter_base_addresses(self, name_suffix=None):
        if name_suffix is None:
            name_suffix = '_' + self.name if len(self.aliases) else ''

        if len(self.base_addr)==1:
            yield ('BASE_ADDRESS'+name_suffix, list(self.base_addr)[0])
        else:
            for index, addr in enumerate(sorted(self.base_addr)):
                yield ('BASE_ADDRESS{}_{}'.format(name_suffix, index), addr)

        for alias in self.aliases:
            yield from alias.iter_base_addresses(name_suffix='_'+alias.name)

    def iter_register_offsets(self):
        for c in self.clusters:
            for r in c.registers:
                yield(r.name, r.address_offset)
        for r in self.registers:
            yield(r.name, r.address_offset)
    
    def is_equivalent(self, other):
        return super().is_equivalent(other) and lists_equivalent(self.clusters, other.clusters)

    def size(self):
        if len(self.clusters):
            return max(super().size(), max([c.size() for c in self.clusters]))
        else:
            return super().size()

    def padded_size(self):
        return 4 + 4*int((self.size()-1)/4)


class RegisterCluster(RegisterContainer):
    def __init__(self, name):
        self.name = name
        super().__init__()

    def is_equivalent(self, other):
        return (self.name == other.name) and super().is_equivalent(other)


class Register:
    def __init__(self, address_offset, name, description, size, dim):
        self.address_offset = address_offset
        self.name = name
        self.description = ' '.join(description.split())
        self.size = size
        self.dim = dim
        self.fields = []

    def add_field(self, field):
        self.fields.append(field)

    def size_bytes(self):
        return self.dim * math.ceil(self.size/8)

    def sorted_fields(self):
        return sorted(self.fields, key=lambda a: a.bit_offset)

    def is_equivalent(self, other):
        return (self.address_offset == other.address_offset) \
            and (self.name == other.name) \
            and (self.size == other.size) \
            and (self.dim == other.dim) \
            and lists_equivalent(self.sorted_fields(), other.sorted_fields())

    def max_field_name_length(self):
        return max([len(f.name) for f in self.fields], default=0)

    def iter_struct_fields(self):
        bit_offset = 0
        pad_len = self.max_field_name_length()

        for f in self.sorted_fields():
            if f.bit_offset != bit_offset: # insert padding field
                unused_bits = f.bit_offset - bit_offset
                yield(' ' * pad_len, Field(name='', bit_offset=bit_offset, bit_width=unused_bits, description='unused'))
                bit_offset += unused_bits

            yield(f.name.ljust(pad_len), f)
            bit_offset += f.bit_width
    
        if self.size != bit_offset: # append padding at end of struct
            yield(' ' * pad_len, Field(name='', bit_offset=bit_offset, bit_width=self.size-bit_offset, description='unused'))


class Field:
    def __init__(self, name, bit_offset, bit_width, description):
        self.name = name
        self.bit_offset = bit_offset
        self.bit_width = bit_width
        self.description = description

    def is_equivalent(self, other):
        return self.name == other.name and self.bit_offset==other.bit_offset and self.bit_width==other.bit_width
    
    def bits_str(self):
        if self.bit_width == 1:
            return "bit {}".format(self.bit_offset)
        else:
            return "bits {}..{}".format(self.bit_offset, self.bit_offset + self.bit_width - 1)

    def bit_mask(self):
        return ( (1<<self.bit_width)-1 ) << self.bit_offset

