
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/prctl.h>
#include<linux/seccomp.h>

int main()
{
	printf("this is the beginning.\n");
	prctl(PR_SET_SECCOMP,SECCOMP_MODE_STRICT);
	fork();
	printf("see you again.\n");
	return 0;
}
