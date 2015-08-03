/*
 * Create a clone process which behaves same as process created by vfork()
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <malloc.h>

#define STACK_SIZE 12000
#define CHANGE_VAL 123
#define DEFAULT_VAL 0

int glob = DEFAULT_VAL;

void check(void)
{

	switch (glob) {

	case DEFAULT_VAL:
		printf("Copy-on-write happend\n");
		break;
	case CHANGE_VAL:
		printf("Sharing Parents Address space\n");
		break;
	default:
		printf("Set a defined value\n");
		break;

	}

}

int fork_func(void *arg)
{

	printf("%s\n", (char *)arg);
//      printf("%s: glob= %d\n",__func__,glob);
	glob = CHANGE_VAL;
	sleep(3);
	printf("Clone ended\n");
	return 0;
}

int main()
{

	void *child_stack = malloc(STACK_SIZE);
	char *arg = "Clone process created as vfork";
	int ret =
	    clone(fork_func, child_stack + STACK_SIZE, CLONE_VM | CLONE_VFORK,
		  arg);

	waitpid(-1, NULL, __WCLONE);
//      printf("%s: glob= %d\n",__func__,glob);

	check();

	return 0;

}
