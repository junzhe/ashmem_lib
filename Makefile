NOGCCERROR:= yes

CPPFLAGS+= -I/usr/pkg/gcc44/include/c++/4.4.6/ -lstdc++ -I/usr/pkg/gcc44/include/c++/4.4.6/i386-pc-minix/ -L/usr/pkg/gcc44/lib/ -lgcc -L /usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/ 

PROG = ashmem_lib_test
SRCS = ashmem-dev.cpp test.cpp
MAN=

.include <bsd.prog.mk>
