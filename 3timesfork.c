#include<stdio.h>
#include<unistd.h>

int main(){

    int n = fork();
    if(n == 0){
        fork();
    }
    printf("Hello World \n");
}