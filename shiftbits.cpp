#include<bits/stdc++.h>

using namespace std;

int leftrotate(int n,int d){
    int range = (int)sizeof(int)*8;
    return n << d | n >> (range-d);
}

int rightrotate(int n,int d){
    int range = (int)sizeof(int)*8;
    return n >> d | n << (range-d);
}



int main(){
    int ans = leftrotate(15,2);
    int bits = __builtin_popcount(ans);
    cout << "The number of set bits are: " << bits << endl;
    cout << ans;

}