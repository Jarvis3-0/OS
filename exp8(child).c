#include<stdio.h>
#include<unistd.h>
int main()
{
 int pid;
 pid=fork();
 if (pid==0)
 {
 printf("\n After fork");
 printf("\n The child precess created by fork system call %d\n", getpid());
 }
 else
 {
 printf("\n Before fork");
 printf("\n Prent procrss id is -: %d", getppid());
 printf("\n parent process executed successfully\n");
 } 
 return 0;
 }
