#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v1 = {4,2,5,3,5,8,3};
    sort(v1.rbegin(),v1.rend());
    for(int i: v1){
        cout << i << " ";
    }
}