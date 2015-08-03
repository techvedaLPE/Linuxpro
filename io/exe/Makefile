include ../../Makefile.inc

P=io/exe/

all:	
	${GCC} access.c -o access ${ECHO}access.c
	${GCC} buftest.c -o buftest	${ECHO}buftest.c
	${GCC} filetype.c -o filetype ${ECHO}filetype.c
	${GCC} mmap2.c -o mmap2 ${ECHO}mmap2.c
	${GCC} mmap.c -o mmap ${ECHO}mmap.c
	${GCC} readfifo.c -o readfifo ${ECHO}readfifo.c
	${GCC} app.c -o app ${ECHO}app.c
	${GCC} cdpwd.c -o cdpwd ${ECHO}cdpwd.c
	${GCC} hole.c -o hole ${ECHO}hole.c
	${GCC} mmap1.c -o mmap1 ${ECHO}mmap1.c
	${GCC} mmap3.c -o mmap3 ${ECHO}mmap3.c
	${GCC} read.c -o read ${ECHO}read.c
	${GCC} writefifo.c -o writefifo ${ECHO}writefifo.c
clean : 
	${RM} access buftest filetype mmap2 mmap readfifo app cdpwd hole mmap1 mmap3 read writefifo

