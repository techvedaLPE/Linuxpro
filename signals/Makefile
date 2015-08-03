include ../Makefile.inc
SHELL:=/bin/bash -O extglob
P=signals/

all:	
	${GCC} ignorepend.c -o ignorepend ${ECHO}ignorepend.c
	${GCC} sigaction.c -o sigaction ${ECHO}sigaction.c
	${GCC} sigblock.c -o sigblock ${ECHO}sigblock.c
	${GCC} sigfd1.c -o sigfd1 ${ECHO}sigfd1.c
	${GCC} sigintr.c -o sigintr ${ECHO}sigintr.c
	${GCC} sigtwait3.c -o sigtwait3 ${ECHO}sigtwait3.c
	${GCC} test.c -o test ${ECHO}test.c
	${GCC} sigcom1.c -o sigcom1 ${ECHO}sigcom1.c
	${GCC} sigalarm1.c -o sigalarm1 ${ECHO}sigalarm1.c
	${GCC} sigfd.c -o sigfd ${ECHO}sigfd.c
	${GCC} sigrestart.c -o sigrestart ${ECHO}sigrestart.c
	${GCC} sigtwait.c -o sigtwait ${ECHO}sigtwait.c
	${GCC} oldact.c -o oldact	${ECHO}oldact.c
	${GCC} sigcom.c -o sigcom ${ECHO}sigcom.c
	${GCC} sigalarm.c -o sigalarm ${ECHO}sigalarm.c
	${GCC} sigign.c -o sigign ${ECHO}sigign.c
	${GCC} sigwait2.c -o sigwait2 ${ECHO}sigwait2.c
	${GCC} sigabort.c -o sigabort ${ECHO}sigabort.c
	${GCC} sigtwait2.c -o sigtwait2 ${ECHO}sigtwait2.c
	${GCC} sigwait.c -o sigwait ${ECHO}sigwait.c
	${GCC} sigaltstack.c -o sigaltstack ${ECHO}sigaltstack.c
	${GCC} sigdefer.c -o sigdefer ${ECHO}sigdefer.c
	${GCC} siginfo.c -o siginfo ${ECHO}siginfo.c
	${GCC} sigwait2.c -o sigwait2 ${ECHO}sigwait2.c
	${GCC} sigwait.c -o sigwait ${ECHO}sigwait.c
	${GCC} sigset1.c -o sigset1 ${ECHO}sigset1.c
	${GCC} sigset2.c -o sigset2 ${ECHO}sigset2.c
	${GCC} sigset3.c -o sigset3 ${ECHO}sigset3.c
	${GCC} sigset4.c -o sigset4 ${ECHO}sigset4.c
	${GCC} sigset5.c -o sigset5 ${ECHO}sigset5.c

	
clean: 
	${RM} *~ !(*.c|Makefile)
