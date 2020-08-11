include config.mk

.SUFFIXES:
.SUFFIXES: .o .c

INC= -I inc
HDR=\
	inc/stdio.h\
	inc/stdlib.h\
	inc/string.h

# MAN

# LIB SRC
LIBCSRC=\
	src/ctype/isalnum.c\
	src/ctype/isalpha.c\
	src/ctype/isascii.c\
	src/ctype/isblank.c\
	src/ctype/iscntrl.c\
	src/ctype/isdigit.c\
	src/ctype/isgraph.c\
	src/ctype/islower.c\
	src/ctype/isprint.c\
	src/ctype/ispunct.c\
	src/ctype/isspace.c\
	src/ctype/isupper.c\
	src/ctype/isxdigit.c\
	src/ctype/toascii.c\
	src/ctype/tolower.c\
	src/ctype/toupper.c\
	src/err/err.c\
	src/err/errx.c\
	src/err/verr.c\
	src/err/verrx.c\
	src/err/vwarn.c\
	src/err/vwarnx.c\
	src/err/warn.c\
	src/err/warnx.c\
	src/stdio/asprintf.c\
	src/stdio/dprintf.c\
	src/stdio/fclose.c\
	src/stdio/fdopen.c\
	src/stdio/fflush.c\
	src/stdio/fgetc.c\
	src/stdio/fgets.c\
	src/stdio/fileno.c\
	src/stdio/fopen.c\
	src/stdio/fprintf.c\
	src/stdio/fputc.c\
	src/stdio/fputs.c\
	src/stdio/fread.c\
	src/stdio/fwrite.c\
	src/stdio/getchar.c\
	src/stdio/printf.c\
	src/stdio/putchar.c\
	src/stdio/puts.c\
	src/stdio/snprintf.c\
	src/stdio/sprintf.c\
	src/stdio/stderr.c\
	src/stdio/stdin.c\
	src/stdio/stdout.c\
	src/stdio/strtomode.c\
	src/stdio/vasprintf.c\
	src/stdio/vdprintf.c\
	src/stdio/vfprintf.c\
	src/stdio/vprintf.c\
	src/stdio/vsnprintf.c\
	src/stdio/vsprintf.c\
	src/stdlib/_Exit.c\
	src/stdlib/abort.c\
	src/stdlib/atoi.c\
	src/stdlib/atol.c\
	src/stdlib/atoll.c\
	src/stdlib/bsearch.c\
	src/stdlib/calloc.c\
	src/stdlib/exit.c\
	src/stdlib/free.c\
	src/stdlib/malloc.c\
	src/stdlib/qsort.c\
	src/stdlib/realloc.c\
	src/stdlib/strtol.c\
	src/stdlib/strtoll.c\
	src/stdlib/strtoul.c\
	src/stdlib/strtoull.c\
	src/string/bcmp.c\
	src/string/bcopy.c\
	src/string/bzero.c\
	src/string/explicit_bzero.c\
	src/string/index.c\
	src/string/memccpy.c\
	src/string/memchr.c\
	src/string/memcmp.c\
	src/string/memcpy.c\
	src/string/memmem.c\
	src/string/memmove.c\
	src/string/mempcpy.c\
	src/string/memrchr.c\
	src/string/memset.c\
	src/string/rindex.c\
	src/string/stpcpy.c\
	src/string/stpncpy.c\
	src/string/strcat.c\
	src/string/strchr.c\
	src/string/strcpy.c\
	src/string/strdup.c\
	src/string/strlen.c\
	src/string/strncat.c\
	src/string/strncpy.c\
	src/string/strndup.c\
	src/string/strnlen.c\
	src/string/strrchr.c\
	src/string/strstr.c\
	src/string/bcmp.c\
	src/string/bcopy.c\
	src/string/bzero.c\
	src/string/explicit_bzero.c\
	src/string/index.c\
	src/string/memccpy.c\
	src/string/memchr.c\
	src/string/memcmp.c\
	src/string/memcpy.c\
	src/string/memmem.c\
	src/string/memmove.c\
	src/string/mempcpy.c\
	src/string/memrchr.c\
	src/string/memset.c\
	src/string/rindex.c\
	src/string/stpcpy.c\
	src/string/stpncpy.c\
	src/string/strcat.c\
	src/string/strchr.c\
	src/string/strcpy.c\
	src/string/strdup.c\
	src/string/strerror.c\
	src/string/strerror_r.c\
	src/string/strlen.c\
	src/string/strncat.c\
	src/string/strncpy.c\
	src/string/strndup.c\
	src/string/strnlen.c\
	src/string/strrchr.c\
	src/string/strstr.c

# LIB PATH
LIBC= lib/libc.a

# LIB OBJS
LIBCOBJ= $(LIBCSRC:.c=.o)

# ALL
LIB= $(LIBC)
OBJ= $(LIBCOBJ)
SRC=

# VAR RULES
all: $(LIB)

$(OBJ): $(HDR) config.mk

# SUFFIX RULES
.o:
	$(CC) $(LDFLAGS) -o $@ $< $(LIB) $(LDLIBS)

.c.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INC) -o $@ -c $<

# LIBRARIES RULES
$(LIBC): $(LIBCOBJ)
	$(AR) rc $@ $(LIBCOBJ)
	$(RANLIB) $@

# USER ACTIONS
clean:
	rm -f $(BIN) $(OBJ) $(LIB)

.PHONY:
	all install clean
