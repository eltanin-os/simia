#include "tertium_cpu.h"
#include "tertium_dat.h"

#ifndef __HAVE_FILE
#ifdef  __NEED_FILE
#define __HAVE_FILE
typedef ctype_ioq FILE;
#endif
#endif

#ifndef __HAVE_size_t
#ifdef  __NEED_size_t
#define __HAVE_size_t
typedef usize size_t;
#endif
#endif

#ifndef __HAVE_va_list
#ifdef  __NEED_va_list
#define __HAVE_va_list
typedef __va_list va_list;
#endif
#endif
