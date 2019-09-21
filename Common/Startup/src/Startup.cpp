#include <stdint.h>
#include <stddef.h>

struct copy_table_t 
{
    uint32_t const* src;
    uint32_t* dest;
    uint32_t  wlen;
};

struct zero_table_t
{
    uint32_t* dest;
    uint32_t  wlen;
};

extern const copy_table_t __copy_table_start__;
extern const copy_table_t __copy_table_end__;
extern const zero_table_t __zero_table_start__;
extern const zero_table_t __zero_table_end__;

extern "C" void SystemInit() __attribute__ ((weak, alias("WeakSystemInit")));
extern "C" void _start() __attribute__((noreturn));
extern "C" void initialise_monitor_handles(void);

extern "C" void Reset_Handler()
{
    SystemInit();

    for (copy_table_t const* table = &__copy_table_start__; table < &__copy_table_end__; ++table) 
    {
        for (size_t i=0; i<table->wlen; ++i) 
        {
            table->dest[i] = table->src[i];
        }
    }

    for (zero_table_t const* table = &__zero_table_start__; table < &__zero_table_end__; ++table) 
    {
        for (size_t i=0; i<table->wlen; ++i) 
        {
            table->dest[i] = 0u;
        }
    }

#ifdef LIBREUCPP_RDIMON
    initialise_monitor_handles();
#endif

    _start();
}

extern "C" void WeakSystemInit(void)
{
}

extern "C" void _exit(int code)
{
    (void) code;
    __asm__("BKPT");
    while (true);
}