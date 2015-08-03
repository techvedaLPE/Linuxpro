include ../Makefile.inc

P=io/
all:locker non_locker
	${GCC} aio_read_write.c -lrt -o aio_read_write ${ECHO}aio_read_write.c
	${GCC} aio_read_write_list.c -lrt -o aio_read_write_list ${ECHO}aio_read_write_list.c
	${GCC} multi1.c -o multi1 ${ECHO}multi1.c
	${GCC} multi2.c -o multi2 ${ECHO}multi2.c
	${GCC} multi3.c -o multi3 ${ECHO}multi3.c
	${GCC} multi4.c -o multi4 ${ECHO}multi4.c
	${GCC} splice.c -o splice ${ECHO}splice.c
	${GCC} poll1.c -o poll1 ${ECHO}poll1.c
	${GCC} poll2.c -o poll2 ${ECHO}poll2.c
	${GCC} mmap1.c -o mmap1 ${ECHO}mmap1.c
	${GCC} mmap2.c -o mmap2 ${ECHO}mmap2.c
	${GCC} mmap3.c -o mmap3 ${ECHO}mmap3.c
	${GCC} mmap4.c -o mmap4 ${ECHO}mmap4.c
	${GCC} mmap5.c -o mmap5 ${ECHO}mmap5.c
	${GCC} mmap.c -o mmap ${ECHO}mmap.c
	${GCC} mmap_fullfile.c -o mmap_fullfile ${ECHO}mmap_fullfile.c
	${GCC} write.c -o write ${ECHO}write.c
	${GCC} flock.c -o flock ${ECHO}flock.c
	${GCC} mmap.c -o mmap ${ECHO}mmap.c	
	${GCC} flock2.c -o flock2 ${ECHO}flock2.c
	${GCC} flock1.c -o flock1 ${ECHO}flock1.c
	${GCC} flock3.c -o flock3 ${ECHO}flock3.c
	${GCC} proc42.c -o proc42 ${ECHO}proc42.c
	${GCC} singlecopy.c -o singlecopy ${ECHO}singlecopy.c
	${GCC} perror.c -o perror ${ECHO}perror.c
	${GCC} read.c -o read 	${ECHO}read.c
	${GCC} read_ahead.c -o read_ahead ${ECHO}read_ahead.c
	${GCC} readv.c -o readv ${ECHO}readv.c
	${GCC} write1.c -o write1 ${ECHO}write1.c
	${GCC} create.c -o create ${ECHO}create.c
	${GCC} directio.c -o directio ${ECHO}directio.c
	${GCC} lseek.c -o lseek ${ECHO}lseek.c
	${GCC} open.c -o open ${ECHO}open.c
	${GCC} read1.c -o read1 ${ECHO}read1.c
	${GCC} sync.c -o sync ${ECHO}sync.c
	${GCC} write.c -o write ${ECHO}write.c
	${GCC} writev.c -o writev ${ECHO}writev.c
	${GCC} copysync.c -o copysync ${ECHO}copysync.c
	${GCC} direct_read.c -o direct_read ${ECHO}direct_read.c
	${GCC} fstatcopy.c -o fstatcopy ${ECHO}fstatcopy.c
	${GCC} app.c -o app ${ECHO}app.c
	${GCC} test.c -o test ${ECHO}test.c
	${GCC} copy.c -o copy ${ECHO}copy.c
	${GCC} fstat.c -o fstat ${ECHO}fstat.c
	${GCC} fs_stats.c -o fs_stats ${ECHO}fs_stats.c
locker: locker.c common.h common.o
	@gcc -w -Wall locker.c common.o -o locker ${ECHO}locker.c

non_locker: non_locker.c common.h common.o
	@gcc -w -Wall non_locker.c common.o -o non_locker ${ECHO}non_locker.c

common.o: common.c common.h
	@gcc -w -Wall -c common.c -o common.o ${ECHO}common.c

clean:
	${RM} *~ aio_read_write_list aio_read_write multi1 multi2 multi3 multi4 splice poll1 poll2 pone ptwo mmap1 mmap2 mmap3 mmap4 mmap5 mmap mmap_fullfile write flock mmap flock1 flock2 flock3 proc2 proc1 proc3 proc41 proc42 proc51 proc52 singlecopy locker non_locker *.o perror read read_ahead readv write1 copysync direct_read create directio lseek open read1 sync write writev copy.mp4 copysyncdirect_read fstatcopy app test copy fs_stats fstat
