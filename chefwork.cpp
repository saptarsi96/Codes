#include<iostream>
#include<vector>

using namespace std;

int main(){

    int size;
    vector<int> prices;
    vector<int> workers;
    cin >> size;
    while(size--){
        int x;
        cin >> x;
        prices.push_back(x);
        workers.push_back(x);
    }
    
}