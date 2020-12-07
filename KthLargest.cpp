#include<bits/stdc++.h>

using namespace std;

int main(){

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> val;
    int k,n;
    cin >> k >> n;
    while(n--){
        int temp;
        cin >> temp;
        val.push_back(temp);
    }
    for(int i:val){
        pq.push(i);
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout << pq.top();

}