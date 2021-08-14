
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("this is the beginning.\n");
	fork();
	printf("see you again.\n");
	return 0;
}
