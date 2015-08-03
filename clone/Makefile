include ../Makefile.inc

P=clone/

all:	
	${GCC} clone1.c -D_GNU_SOURCE -o clone1 ${ECHO}clone1.c
	${GCC} clone2.c -D_GNU_SOURCE -o clone2 ${ECHO}clone2.c
	${GCC} clone3.c -D_GNU_SOURCE -o clone3 ${ECHO}clone3.c
	${GCC} cl_asthread.c -D_GNU_SOURCE -o cl_asthread ${ECHO}cl_asthread.c
	${GCC} cl_asfork.c -D_GNU_SOURCE -o cl_asfork ${ECHO}cl_asfork.c
	${GCC} cl_asvfork.c -D_GNU_SOURCE -o cl_asvfork ${ECHO}cl_asvfork.c

clean : 
	${RM} clone1 clone2 clone3 cl_asthread cl_asfork cl_asvfork

