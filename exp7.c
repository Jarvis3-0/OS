// C code to implement ls | wc command
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include<errno.h>
#include<sys/wait.h>
#include <unistd.h>
int main(){
    int a[2];
    pipe(a);
  
    if(!fork())
    {
        close(1);
        dup(a[1]);
        close(a[0]);
        execlp("ls","ls",NULL);
    }
    else
    {
        close(0);
        dup(a[0]);
        close(a[1]);
        execlp("wc","wc",NULL);
    }
}


//or

#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>
#include<sys/stat.h>
int main(char* argv[])
{
DIR *dp;
struct dirent *sd;
//clrscr();
dp=opendir(".");
while((sd=readdir(dp))!=NULL)
{
printf("%s\n", sd->d_name);
}
closedir(dp);
return 0;
}

