#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;

int main(){
    vector<int> v1(4,0);

    int size = 0,query = 0;
    cin >> size;
    while(size--){
        int ans = 0;
        string temp;
        cin >> query;
        vector<int> v1 = {1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
        for(int i=0;i<v1.size();i++){
            if(v1[i] == query)
                break;
            else
                temp = to_string(v1[i]);
                ans += temp.length();       
        }
        cout << ans << endl; 
    }
    return 0;
}