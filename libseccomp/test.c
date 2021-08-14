#include<stdio.h>
#include<unistd.h>
#include<seccomp.h>
#include<sys/syscall.h>

int main()
{
  printf("this is the beginning.\n");

  char * filename = "/bin/sh";
  char * argv[] = { "/bin/sh", NULL };
  char * envp[] = { NULL }; 
  syscall(59, filename, argv, envp);

  return 0;
}

