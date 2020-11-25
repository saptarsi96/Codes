#include<stdio.h>
#include<unistd.h>

int main(){

    int id = fork();
    if(id>0){
        for(int i=6;i<=10;i++){
            printf("%d \n",i);
        }
    }
    else{
        for(int i=1;i<=5;i++){
            printf("%d \n",i);
        }
    }
}