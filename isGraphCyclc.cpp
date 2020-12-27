#include<bits/stdc++.h>

using namespace std;
vector<int> g[100];

bool isCyclicUtil(int i,vector<bool> &vis){

}

void isCyclic(int i,int size){
    
    vector<bool> vis(size,false);
    flag = isCyclicUtil(i,vis);

}


int main(){
    int n,m,u,v;
    cin >> n >> m;
    bool flag = false;
    while(m--){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); //Comment if directed edge.
    }
    for(int i=0;i<n;i++){
        flag = isCyclic(i,n);
    }


}