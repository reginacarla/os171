#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


void main(){
	printf("PTD[%d] (PPTD[%d])\n", getpid(), getppid());
	sleep(1);
}
