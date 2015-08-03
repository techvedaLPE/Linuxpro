#include <string.h>
#define DATA "/mydata"
#define SEM  "/datasem"

struct mydata {
	char sem_name[30];
	int a;
	int b;
};
