#ifndef _STDLIB_H
#define _STDLIB_H

#define __NEED_size_t
#include "__types__.h"

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define NULL ((void *)0)

void _Exit(int);
void abort(void);
int atoi(const char *);
long atol(const char *);
vlong atoll(const char *);
void *bsearch(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
void exit(int);
void free(void *);
void *malloc(size_t);
void qsort(void *, size_t, size_t, int (*)(const void *, const void *));
void *realloc(void *, size_t);
long strtol(const char *__restrict, char **__restrict, int);
vlong strtoll(const char *__restrict, char **__restrict, int);
ulong strtoul(const char *__restrict, char **__restrict, int);
uvlong strtoull(const char *__restrict, char **__restrict, int);

#endif
