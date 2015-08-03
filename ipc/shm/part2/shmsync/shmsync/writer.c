#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>
#include "mydata.h"
#include "datalock.h"

int main()
{
	int fd;
	struct mydata *addr;
	sem_t *sem;

	fd = shm_open(DATA, O_RDWR, 0);
	if (fd == -1) {
		perror("shm_open");
		exit(1);
	}

	addr =
	    (struct mydata *)mmap(NULL, sizeof(struct mydata),
				  PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	if (addr == MAP_FAILED) {
		perror("mmap");
		exit(1);
	}
	int val;
	printf("%s: writing..\n",__func__);
	data_lock(addr);
	addr->a = 10;
	sleep(10);
	addr->b = 30;
	printf("%s: Acomplished writing.\n",__func__);
	printf("%d: %d: %p\n",addr->a,addr->b,sem);

//	printf("%p %p\n",addr,addr->sem);
//	sem_getvalue(addr->sem,&val);
//	printf("semval: %d\n",val);
	data_unlock(addr);
	munmap(addr, sizeof(struct mydata));

	return 0;
}
