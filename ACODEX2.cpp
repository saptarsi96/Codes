#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    for(auto& e:v1){
        cout << e << endl;
    }
    
    
    return 0;

}
