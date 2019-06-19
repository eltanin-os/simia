#ifndef _STDLIB_H
#define _STDLIB_H

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define NULL ((void *)0)

typedef unsigned long size_t;

void   _Exit(int);
void   abort(void);
void * calloc(size_t, size_t);
void   exit(int);
void   free(void *);
void * malloc(size_t);
void * realloc(void *, size_t);

#endif
