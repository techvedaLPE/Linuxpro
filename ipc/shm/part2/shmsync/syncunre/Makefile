include ../../../../../Makefile.inc

P=ipc/shm/part2/shmsync/syncunre/

all:
	${GCC} mtxreader.c -lrt -lpthread -o reader ${ECHO}mtxreader.c
	${GCC} mtxwriter.c -lrt -lpthread -o writer ${ECHO}mtxwriter.c
	${SGCC} mtxmain.c -lrt -lpthread -o main ${ECHO}mtxmain.c

clean : 
	${RM} main mtxmain mtxreader mtxwriter reader writer

