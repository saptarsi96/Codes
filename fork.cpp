#include<iostream>
#include<unistd.h>

using namespace std;

int main(){

    fork();
    if(fork){
        cout << "Hello World" << endl;
    }
    // fork();
    // cout << "Hello World" << endl;
    // return 0;
}