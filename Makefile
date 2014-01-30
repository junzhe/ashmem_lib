NOGCCERROR:= yes

PROG = ashmem_lib_test
SRCS = ashmem-dev.c test.c
MAN=

.include <bsd.prog.mk>
