#include<iostream>
#include<vector>
using namespace std;

int main(){
    string delim = " ";
    vector<int> v1 = {1,4,2,4};
    for(int i=0;i<v1.size();i+=2){
        cout << v1[i] << delim << v1[i+1];
        delim=",";
    }
    return 0;

}