
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFSIZE    8192
void err_sys(const char* x) 
{ 
    perror(x); 
    exit(1); 
}
int main(int argc,char *argv[])
{
int singles(int n);

    int fd;
    int n;
    char* index=argv[0];
    char buf[BUFFSIZE];
    if(argc ==1)
    {
        printf("<sintaxa> fisier1 fisier2....\n");
    }
    else
        while(--argc>0)
        {
            if((fd = open(*++argv,O_RDONLY)) == -1)
            {
                printf("%s: %s: No such file or directory\n",index,*argv);
            }
            else
            {
                while((n = read(fd,buf,BUFFSIZE)) > 0)
                    if(write(STDOUT_FILENO, buf, n) != n)
                    {
                        err_sys("write error");
                    }

                if(n<0)
                {
                    err_sys("read error");
                }
                close(fd);
            }
        }

    return 0;
}