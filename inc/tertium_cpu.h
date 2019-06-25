#ifndef _TERTIUMCPU_H
#define _TERTIUMCPU_H
#define va_list __va_list
#include <tertium/cpu.h>
#undef va_list
#undef va_start
#undef va_arg
#undef va_copy
#undef va_end
#endif
