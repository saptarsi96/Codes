#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int n;
    //std::string ans;
    std::cin >>n;
    cout << n << " ";
    while(n!=1){
        if(n&1){
            n = (n*3)+1;
            cout << n << " ";
        }
        else {
            n = n>>1;
            cout << n << " ";
        }
    }
}