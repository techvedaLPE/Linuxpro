/* Shows how to use mmap sys call
Version : 1.0
Author : Team -C
Note : All modern OS supports memory mapping of files.
*/

# include <unistd.h>
# include <sys/types.h>
# include <sys/mman.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
int main(){
	
	int fd,i;
	unsigned char *filedata= NULL, *temp;
	struct stat sb;

        if (stat("./linux.mp4", &sb) == -1) {
                perror("stat");
                exit(1);
        }
	/*Acquire File descriptor and map file buffer */
	fd = open("linux.mp4",O_RDWR);

	filedata = (char *) mmap((void*)0,sb.st_size,PROT_READ|PROT_WRITE,\
			MAP_SHARED,fd,0);	
	if(filedata == NULL){
		perror("Maping Failed");
		exit(1);
	}
	temp = filedata;
	/* now we can access the content of the file as if it is part of
	   our process starting from the memory pointed by filedata.*/
//	close(fd);
	for(i=0 ; i < sb.st_size; i++)
	{
		printf("\n %c\n",(*filedata));
		filedata++;
	}
	i = munmap((void *)temp, sb.st_size);
	if( i != 0)
		printf(" failed to unmap\n");
	return 0;
}
