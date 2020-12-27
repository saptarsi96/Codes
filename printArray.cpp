#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int> &arr,int size,int i){
    if(i==size){
        return;
    }
    cout << arr[i] << " ";
    printArray(arr,size,i+1);
}

int main(){

    vector<int> arr{1,2,3,4,5};
    int i=0;
    int size = arr.size();
    printArray(arr,size,i);
}