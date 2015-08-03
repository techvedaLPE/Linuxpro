include ../Makefile.inc

P=threads/
all:
	${GCC} pthread_once.c -lpthread -o pthread_once ${ECHO}pthread_once.c
	${GCC} thrcancel1.c -lpthread -o thrcancel1 ${ECHO}thrcancel1.c
	${GCC} thrcancel2.c -lpthread -o thrcancel2 ${ECHO}thrcancel2.c
	${GCC} thrcancel3.c -lpthread -o thrcancel3 ${ECHO}thrcancel3.c
	
	${GCC} procon.c -lpthread -o procon ${ECHO}procon.c
	${GCC} proconsyn.c -lpthread -o proconsyn ${ECHO}proconsyn.c
	${GCC} prod_condvar1.c -lpthread -o prod_condvar1 ${ECHO}prod_condvar1.c
	${GCC} thr_shdata_abmon.c -lpthread -o thr_shdata_abmon ${ECHO}thr_shdata_abmon.c
	${GCC} thr_shdata.c -lpthread -o thr_shdata ${ECHO}thr_shdata.c
	${GCC} thr_shdata_sync.c -lpthread -o thr_shdata_sync ${ECHO}thr_shdata_sync.c
	${GCC} thr_shdata_syncmtx.c -lpthread -o thr_shdata_syncmtx ${ECHO}thr_shdata_syncmtx.c
	
	${GCC} barrier.c -lpthread -o barrier ${ECHO}barrier.c
	${GCC} prod_condvar2.c -lpthread -o prod_condvar2 ${ECHO}prod_condvar2.c
	${GCC} pthread_rwlock.c -lpthread -o pthread_rwlock ${ECHO}pthread_rwlock.c
	${GCC} pthread_spinlock.c -lpthread -o pthread_spinlock ${ECHO}pthread_spinlock.c
	${GCC} rw_wriprio.c pthread_seq.c -lpthread -o rw_wriprio ${ECHO}rw_wriprio.c
	${GCC} thevod.c -lpthread -o thevod ${ECHO}thevod.c
	
	${GCC} consistent.c -lpthread -o consistent ${ECHO}consistent.c
	${GCC} errchk.c -lpthread -o errchk ${ECHO}errchk.c
	${GCC} prio.c -lpthread -o prio ${ECHO}prio.c
	${GCC} recur.c -lpthread -o recur ${ECHO}recur.c
	${GCC} thread_incr_atomic.c -lpthread -o thread_incr_atomic ${ECHO}thread_incr_atomic.c
	${GCC} thread_incr.c -lpthread -o thread_incr ${ECHO}thread_incr.c
	${GCC} thread_incr_deadlock.c -lpthread -o thread_incr_deadlock ${ECHO}thread_incr_deadlock.c
	${GCC} thread_incr_mtx.c -lpthread -o thread_incr_mtx ${ECHO}thread_incr_mtx.c
	
	${GCC} attr_sched1.c -lpthread -o attr_sched1 ${ECHO}attr_sched1.c
	${GCC} attr_sched.c -lpthread -o attr_sched ${ECHO}attr_sched.c
	${GCC} attr_stack.c -lpthread -o attr_stack ${ECHO}attr_stack.c
	${GCC} defattrtib.c -lpthread -o defattrtib ${ECHO}defattrtib.c
	${GCC} detached_attrib.c -lpthread -o detached_attrib ${ECHO}detached_attrib.c
	${GCC} dyn_detach.c -lpthread -o dyn_detach ${ECHO}dyn_detach.c
	${GCC} dyn_join.c -lpthread -o dyn_join ${ECHO}dyn_join.c
	${GCC} ex2.c -lpthread -o ex2 ${ECHO}ex2.c
	${GCC} simple_thread1.c -lpthread -o simple_thread1 ${ECHO}simple_thread1.c
	${GCC} simple_thread.c -lpthread -o simple_thread ${ECHO}simple_thread.c

clean:
	${RM} pthread_once thrcancel3 thrcancel2 thrcancel1 *~ \
	procon proconsyn prod_condvar1 thr_shdata_syncmtx thr_shdata_sync thr_shdata thr_shdata_abmon \
	barrier prod_condvar2 pthread_spinlock thevod pthread_seq pthread_rwlock rw_wriprio \
	consistent errchk prio recur thread_incr_atomic thread_incr thread_incr_deadlock thread_incr_mtx \
	attr_stack attr_sched attr_sched1 defattrtib detached_attrib dyn_join dyn_detach  \
	ex2 simple_thread simple_thread1	
