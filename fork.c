#include<stdio.h>
#include<unistd.h>

int main(){

    int n1 = fork();
    int n2 = fork();
    if(n1>0 && n2>0){
        printf("Hello World \n");
    }
    else if(n1==0 && n2>0){
        printf("Hello World \n");
    }
    else if(n1>0 && n2==0){
        printf("Hello World \n");
    }
    return 0;
}