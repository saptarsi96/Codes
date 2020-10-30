#include<iostream>
#include<string>

using namespace std;

int main(){

    string test,s1,s2;
    getline(cin,test);
    int size,mid;
    size = test.size();
    mid = int(size/2);
    s1 = test.substr(0,mid);
    s2 = test.substr(mid,mid);
    cout << s2 << endl;
    return 0;
}