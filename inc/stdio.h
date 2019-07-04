#ifndef _STDIO_H
#define _STDIO_H

#define __NEED_FILE
#define __NEED_size_t
#define __NEED_va_list
#include "__types__.h"

#define EOF (-1)
#define NULL ((void *)0)

int    asprintf(char **__retrict, const char *__restrict, ...);
int    dprintf(int, const char *__restrict, ...);
int    fclose(FILE *);
int    fflush(FILE *);
FILE * fopen(const char *__restrict, const char *__restrict);
int    fprintf(FILE *__restrict, const char *__restrict, ...);
int    fputc(int, FILE *);
int    getchar(void);
int    printf(const char *__restrict, ...);
int    putc(int, FILE *);
int    putchar(int);
int    puts(const char *);
int    snprintf(char *__restrict, size_t, const char *__restrict, ...);
int    sprintf(char *__restrict, const char *__restrict, ...);
int    vasprintf(char **__retrict, const char *__restrict, va_list);
int    vdprintf(int, const char *__restrict, va_list);
int    vfprintf(FILE *__restrict, const char *__restrict, va_list);
int    vprintf(const char *__restrict, va_list);
int    vsnprintf(char *__restrict, size_t, const char *__restrict, va_list);
int    vsprintf(char *__restrict, const char *__restrict, va_list);

extern void * stderr;
extern void * stdin;
extern void * stdout;

#endif
