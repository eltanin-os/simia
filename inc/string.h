#ifndef _STRING_H
#define _STRING_H

#define __NEED_size_t
#include "__types__.h"

#define NULL ((void *)0)

int bcmp(const void *, const void *, size_t);
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);
void explicit_bzero(void *, size_t);
char *index(const char *, int);
void *memccpy(void *__restrict, const void *__restrict, int, size_t);
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy (void *__restrict, const void *__restrict, size_t);
void *memmem(const void *, size_t, const void *, size_t);
void *memmove (void *, const void *, size_t);
void *mempcpy(void *, const void *, size_t);
void *memrchr(const void *, int, size_t);
void *memset (void *, int, size_t);
char *rindex(const char *, int);
int strerror_r(int, char *, size_t);
char *stpcpy(char *__restrict, const char *__restrict);
char *stpncpy(char *__restrict, const char *__restrict, size_t);
char *strcat(char *__restrict, char *__restrict);
char *strchr(const char *, int);
char *strcpy(char *__restrict, char *__restrict);
char *strdup(const char *);
size_t strlen(const char *);
char *strncat(char *__restrict, char *__restrict, size_t);
char *strncpy(char *__restrict, char *__restrict, size_t);
char *strndup(const char *, size_t);
size_t strnlen(const char *, size_t);
char *strrchr(const char *, int);
char *strstr(const char *, const char *);

#endif
