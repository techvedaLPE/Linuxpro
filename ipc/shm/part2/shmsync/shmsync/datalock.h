#ifndef __DLOCK__
#define __DLOCK__

#define data_lock(addr) {				\
		sem=sem_open(addr->sem_name,O_RDWR);	\
	        sem_wait(sem);				\
		}


#define data_unlock(addr) {			\
		        sem_post(sem);		\
			sem_close(sem);		\
			}

#endif
