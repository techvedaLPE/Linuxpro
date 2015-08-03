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

	/* attach shared memory */
	addr =mmap(NULL, sizeof(struct mydata), PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
	if (addr == MAP_FAILED) {
		perror("mmap");
		exit(1);
	}
	/* get reference to sem */
	
	printf("%s: Trying to fetch data...\n",__func__);
	data_lock(addr);
	printf("%s: Data in obj.a %d\n",__func__, addr->a);
	printf("%s: Data in obj.b %d\n",__func__, addr->b);
	printf("%d: %d: %p\n",addr->a,addr->b,sem);
	
	data_unlock(addr);
	printf("%s: Read data.\n",__func__);

	munmap(addr, sizeof(struct mydata));

	return 0;
}
