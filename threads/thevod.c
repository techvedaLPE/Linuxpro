/*
 * Program to create 2 threads in which one thread prints even offsets and 
 * other prints odd offsets of populated array, synchronously using barriers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <errno.h>

pthread_barrier_t barrier;

void pop_arr(int *arr, int sz)
{

	int i;
	for (i = 0; i < sz / sizeof(*arr); i++)
		arr[i] = i;
}

void *eventhread(void *arg)
{

	int i, *arr = arg;
	printf("%s: Thread[%lu] in execution..\n", __func__, pthread_self());
	for (i = 0; i < 50; i++) {
		usleep(5000);
		printf("%s: a[%d]: %d\n", __func__, 2 * i, arr[2 * i]);
		pthread_barrier_wait(&barrier);
	}

}

void *oddthread(void *arg)
{

	int i, *arr = arg;
	printf("%s: Thread[%lu] in execution..\n", __func__, pthread_self());
	for (i = 0; i < 50; i++) {
		usleep(5000);
		pthread_barrier_wait(&barrier);
		printf("%s : a[%d]: %d\n", __func__, 2 * i + 1, arr[2 * i + 1]);
	}

}

main()
{

	int arr[100];
	pthread_t t1, t2;

	pthread_barrier_init(&barrier, NULL, 2);
	pop_arr(arr, sizeof(arr));

	if (errno = pthread_create(&t1, NULL, eventhread, arr))
		perror("pthread_create");
	if (errno = pthread_create(&t2, NULL, oddthread, arr))
		perror("pthread_create");

	pthread_exit(NULL);
}
