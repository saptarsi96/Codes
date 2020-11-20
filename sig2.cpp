#include <stdio.h>
#include <unistd.h>
#include <csignal>

void sig(int s)
{

    printf("Inside handler : %d", s);
}
int main()
{

    int pid = fork();
    int pid1 = fork();
    (void)signal(SIGINT, sig);
    while (1)
    {
        printf("Child process: %d %d \n", pid, pid1);
        sleep(1);
    }
    // else{
    //      printf("Parent process: %d %d \n",pid,pid1);
    // }
    return 0;
}