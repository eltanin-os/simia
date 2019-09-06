#ifndef _STDIO_H
#define _STDIO_H

#define __NEED_FILE
#define __NEED_size_t
#define __NEED_va_list
#include "__types__.h"

#define EOF (-1)
#define NULL ((void *)0)

#define getc(a) fgetc((a))
#define putc(a, b) fputc((a), (b))

int asprintf(char **__retrict, const char *__restrict, ...);
int dprintf(int, const char *__restrict, ...);
int fclose(FILE *);
FILE *fdopen(int, const char *);
int fflush(FILE *);
char *fgets(char *__restrict, int, FILE *__restrict);
FILE *fopen(const char *__restrict, const char *__restrict);
int fprintf(FILE *__restrict, const char *__restrict, ...);
int fgetc(FILE *);
int fputc(int, FILE *);
int fputs(const char *__restrict, FILE *__restrict);
size_t fread(void *__restrict, size_t, size_t, FILE *__restrict);
size_t fwrite(const void *__restrict, size_t, size_t, FILE *__restrict);
int getchar(void);
int printf(const char *__restrict, ...);
int putchar(int);
int puts(const char *);
int snprintf(char *__restrict, size_t, const char *__restrict, ...);
int sprintf(char *__restrict, const char *__restrict, ...);
int vasprintf(char **__retrict, const char *__restrict, va_list);
int vdprintf(int, const char *__restrict, va_list);
int vfprintf(FILE *__restrict, const char *__restrict, va_list);
int vprintf(const char *__restrict, va_list);
int vsnprintf(char *__restrict, size_t, const char *__restrict, va_list);
int vsprintf(char *__restrict, const char *__restrict, va_list);

extern void * stderr;
extern void * stdin;
extern void * stdout;

#endif
