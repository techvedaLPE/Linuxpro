/* prod_no_condvar.c

   A simple POSIX threads producer-consumer example.

*/
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int arr[10];

typedef enum { FALSE, TRUE } Boolean;

static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static pthread_barrier_t barrier;

static int avail = 0;

static void *producer(void *arg)
{
	sleep(1);		// Make sure that consumers start execution first.
	printf("\n%s: Started producing..\n", __func__);
	int cnt = *((int *)arg);
	int i, j, ret;

	for (j = 0; j < cnt; j++) {
		/* Code to produce units */
		pthread_mutex_lock(&mtx);
		for (i = 0; i < 9; i++)
			arr[i] = 'A' + j;
		pthread_mutex_unlock(&mtx);

		printf("\n%s: Data has produced\n", __func__);
		printf("%s: Broadcasted the signal to consumers.\n\n",
		       __func__);
		avail += 2;	/* Let consumer know another unit is available */
		ret = pthread_cond_broadcast(&cond);	/* Wake sleeping consumer */
		if (ret != 0)
			perror("pthread_cond_signal");
		//usleep(100); or use barrier kind of thing
		pthread_barrier_wait(&barrier);
	}

	return NULL;
}

static void *consumer1(void *arg)
{
	int i, j, ret;
	/* Consumer code to process produced units */
	printf("\n%s: Trying to consume..\n", __func__);
	for (j = 0; j < *(int *)arg; j++) {
		pthread_mutex_lock(&mtx);
		while (avail == 0) {	/* wait for units to consume */
			ret = pthread_cond_wait(&cond, &mtx);
			if ((errno=ret) != 0)
				perror("pthread_cond_wait");
		}

		printf("%s: Signal recieved.\n", __func__);
		printf("Data read: ");
		for (i = 0; i < 9; i++)
			printf("%c ", arr[i]);
		printf("\n");
		avail--;
		pthread_mutex_unlock(&mtx);

		pthread_barrier_wait(&barrier);

	}

}

static void *consumer2(void *arg)
{
	printf("\n%s: Trying to consume..\n", __func__);
	/* Consumer code to process produced units */
	int i, j, ret;
	for (j = 0; j < *(int *)arg; j++) {
		pthread_mutex_lock(&mtx);
		while (avail == 0) {	/* wait for units to consume */
			ret = pthread_cond_wait(&cond, &mtx);
			if ((errno=ret) != 0)
				perror("pthread_cond_wait");
		}

		printf("%s: Signal recieved.\n", __func__);
		printf("Data read: ");
		for (i = 0; i < 9; i++)
			printf("%c ", arr[i]);
		printf("\n");
		avail--;
		pthread_mutex_unlock(&mtx);

		pthread_barrier_wait(&barrier);

	}

}

int main()
{
	pthread_t tid;
	int ret, j, totRequired = 26;

	pthread_barrier_init(&barrier, NULL, 3);

	/* launch producer thread */
	ret = pthread_create(&tid, NULL, producer, &totRequired);
	if (ret != 0) {
		errno = ret;
		perror("pthread_create");
	}

	/* launch consumer threads */
	ret = pthread_create(&tid, NULL, consumer1, &totRequired);
	if (ret != 0) {
		errno = ret;
		perror("pthread_create");
	}

	ret = pthread_create(&tid, NULL, consumer2, &totRequired);
	if (ret != 0) {
		errno = ret;
		perror("pthread_create");
	}

	pthread_exit(NULL);
	exit(EXIT_SUCCESS);
}
