include ../Makefile.inc

P=memalloc/

all:  	
	${GCC} cleanup.c -o cleanup ${ECHO}cleanup.c
	${GCC} cleanup1.c -o cleanup1 ${ECHO}cleanup1.c
	${GCC} find_system_break.c -o find_system_break ${ECHO}find_system_break.c
	${GCC} mallinfo.c -o mallinfo ${ECHO}mallinfo.c
	${GCC} malloc.c -o malloc ${ECHO}malloc.c
	${GCC} malloc_stats.c -o malloc_stats ${ECHO}malloc_stats.c
	${GCC} malloc_tuning.c -o malloc_tuning ${ECHO}malloc_tuning.c
	${GCC} malloc_usable_size.c -o malloc_usable_size ${ECHO}malloc_usable_size.c
	${GCC} memlock.c -o memlock ${ECHO}memlock.c
	${GCC} oom.c -o oom ${ECHO}oom.c
	${GCC} mincore.c -o mincore ${ECHO}mincore.c
	${GCC} mlockall.c -o mlockall ${ECHO}mlockall.c
	${GCC} mlock.c -o mlock ${ECHO}mlock.c
	${GCC} alloc_brk.c -o alloc_brk ${ECHO}alloc_brk.c
	${GCC} alloc.c -o alloc ${ECHO}alloc.c
	${GCC} alloc_sbrk.c -o alloc_sbrk ${ECHO}alloc_sbrk.c
	${GCC} rlimit.c -o rlimit ${ECHO}rlimit.c
	${GCC} cleanup.c -o cleanup ${ECHO}cleanup.c
	${GCC} dev_zero.c -o dev_zero ${ECHO}dev_zero.c
	${GCC} find_size.c -o find_size ${ECHO}find_size.c
	
clean : 
	${RM} *~ cleanup cleanup1 demo find_system_break mallinfo malloc malloc_usable_size \
	malloc_tuning malloc_stats memlock oom mincore mlockall mlock alloc_brk alloc alloc_sbrk rlimit cleanup dev_zero find_size
