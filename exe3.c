/EXPT NO 1.1
//To open a file
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
extern int errno;
int main()
{
int fd=open("foo.txt", O_RDONLY|O_CREAT);
printf("fd=%d\n",fd);
if(fd==-1)
{
printf("Erro number %d\n",errno);
perror("Program");
}
return 0;
}

//or
#include <stdio.h>
int main() {
FILE *fp;
fp  = fopen ("D://data.txt", "w");
}s