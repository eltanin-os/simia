#ifndef _STDARG_H
#define _STDARG_H

#define __NEED_va_list
#include "__types__.h"

#define va_start(a, b) __builtin_va_start(a, b)
#define va_arg(a, b) __builtin_va_arg(a, b)
#define va_copy(a, b) __builtin_va_copy(a, b)
#define va_end(a) __builtin_va_end(a)

#endif
