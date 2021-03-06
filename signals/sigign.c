/* Shows how to handle signals
Version : 1.0
Author : Team -C
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <signal.h>

static sigcounter = 0;
void handler(int signum)
{
	printf("\n %s: \n",__func__);
	printf(" App handler called counter set to %d \n", ++sigcounter);
}

int main()
{
	signal(SIGINT, SIG_IGN);
	printf(" signal 1 now set to be ignored \n");
	getchar();

	signal(SIGINT, handler);
	printf(" Application specific handler registerd \n");
	getchar();

	signal(SIGINT, SIG_DFL);
	printf(" Default handler enabled \n");
	getchar();
	return 0;

}
