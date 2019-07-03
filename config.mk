PREFIX=    /usr/local
MANPREFIX= $(PREFIX)/share/man

AR     = ar
CC     = cc
RANLIB = ranlib

EFLAGS   = -Wno-incompatible-library-redeclaration
CFLAGS   = -O0 -g -std=c99 -Wall -Wextra -Werror -pedantic $(EFLAGS)
LDFLAGS  =
