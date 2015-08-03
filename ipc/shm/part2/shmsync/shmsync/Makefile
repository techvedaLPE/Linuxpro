include ../../../../../Makefile.inc

P=ipc/shm/part2/shmsync/shmsync/

all:	
	${SGCC} main.c -lrt -lpthread -o main  ${ECHO}main.c
	${SGCC} reader.c -lrt -lpthread -o reader  ${ECHO}reader.c
	${SGCC} writer.c -lrt -lpthread -o writer  ${ECHO}writer.c
clean : 
	${SRM} main reader writer

