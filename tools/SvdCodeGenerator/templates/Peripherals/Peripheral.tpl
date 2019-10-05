{%- macro register_fields(container) -%}
{% for reg, padding_index, padding_bytes in container.iter_registers() -%}
{% if padding_bytes %}
    uint8_t Reserved{{ padding_index }}[{{padding_bytes}}];
{% endif %}
    volatile union {{ reg.name }}_T // {{ reg.name }}: {{ reg.description }} 
    {
        uint{{ reg.size }}_t reg;
{%- if reg.fields %}
        struct __attribute__((packed)) {{ reg.name }}_BIT_T
        {
    {%- for padded_name, f in reg.iter_struct_fields() %}
            unsigned {{ padded_name }} : {{ f.bit_width }}; // {{ f.bits_str() }} {{ f.description }}
    {%- endfor %}    
        } bit;
    {% for f in reg.sorted_fields() %}
        static constexpr unsigned {{ f.name}}_POS = {{ f.bit_offset }};
        static constexpr unsigned {{ f.name}}_MASK = {{ '0x%08x' % f.bit_mask() }};
        static constexpr unsigned {{ f.name}}(unsigned value) { return (value << {{ f.bit_offset }}); }
    {%- endfor %}    
{%- endif %}
    } {{ reg.name }}{% if reg.dim != 1 %}[{{reg.dim}}]{% endif %};
{% endfor %}
{%- endmacro -%}

#pragma once

#include <stdint.h>
#include <unistd.h>
{% for ns in namespaces %}
namespace {{ ns }} {
{%- endfor %}

struct __attribute__((aligned(4), packed)) {{ periph.unified_name }}_T
{
    static constexpr size_t INSTANCE_SIZE = {{ periph.size() }};
    static constexpr size_t PADDED_INSTANCE_SIZE = {{ periph.padded_size() }};
{%- for name, addr in periph.iter_base_addresses() %}
    static constexpr intptr_t {{name}} = {{ '0x%02x' % addr }};
{%- endfor %}
{% for name, offset in periph.iter_register_offsets() %}
    static constexpr intptr_t ADDR_OFFSET_{{name}} = {{ '0x%02x' % offset }};
{%- endfor %}
{% if periph.clusters %}
    union CLUSTER_T // clustered register
    {
{%- for cluster in periph.clusters %}
        struct __attribute__((packed)) {{ cluster.name }}_T // Cluster {{ cluster.name }}
        {
        {{ register_fields(cluster)|indent(width=8) }}
        } {{ cluster.name }};
{% endfor %}
    } CLUSTER; // clustered register
{%- else -%}
    {{ register_fields(periph) }}
{%- endif %}
}; // struct {{ periph.name }}_T

static_assert(sizeof({{ periph.unified_name }}_T) == {{ periph.unified_name }}_T::PADDED_INSTANCE_SIZE, "invalid peripheral register struct");
{% for ns in namespaces|reverse %}
} // namespace {{ ns }}
{%- endfor %}
