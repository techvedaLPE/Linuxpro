include ../Makefile.inc

P=libs/

all:
	@#${GCC} test.c -L. -lxyz -o test ${ECHO}test.c
	${GCC} -c -fPIC one.c && echo -n "  OBJ $P" && echo "one.o"
	${GCC} -c -fPIC two.c && echo -n "  OBJ $P" && echo "two.o"
	${GCC} -c -fPIC libsrc.c && echo -n "  OBJ $P" && echo "libsrc.o"
	${GCC} -shared one.o -o libone.so && echo -n "  LIB $P" && echo "libone.so"
	${GCC} -shared two.o -o libtwo.so && echo -n "  LIB $P" && echo "libtwo.so"
	${GCC} -shared -nostdlib libsrc.o -o libsrc.so && echo -n "  LIB $P" && echo "libsrc.so"
	${GCC} libtest.c ./libone.so -o libtest ${ECHO}libtest.c
	${GCC} -c -fPIC lib1.c -o libb.o && echo -n "  OBJ $P" && echo "libb.o"
	${GCC} -shared libb.o -o libb.so && echo -n "  LIB $P" && echo "libb.so"
	${GCC} dltest.c -ldl -o dltest ${ECHO}dltest.c
	
		
clean:
	${RM} *.so libtest *.a test *~ *.so libtest *.a libtest *.a test dltest *~
