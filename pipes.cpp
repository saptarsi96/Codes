#include <stdio.h>
#include <stdlib.h>
#include<unistd.h> 
#include<sys/types.h> 
#include<string.h> 
#include<sys/wait.h> 

#define MAXLINE 200
int main()
{
    int n, fd[2];
    pid_t pid;
    char line[MAXLINE];
    if (pipe(fd) < 0)
        printf("PIPE ERROR!\n");
    if ((pid = fork()) < 0)
        printf("FORK ERROR!\n");
    if (pid == 0)
    {
        close(fd[1]);
        printf("Child process reading from pipe...\n");
        n = read(fd[0], line, MAXLINE);
        puts(line);
    }
    else
    {
        close(fd[0]);
        printf("Parent Process writing into pipe...\n");
        write(fd[1], "hello world\n", 12);
    }
    return 0;
}
