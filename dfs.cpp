#include<bits/stdc++.h>

using namespace std;
vector<int> g[100];
bool vis[100];

void dfs(int u){
    vis[u] = true;
    cout << u << "->";
    for(int v:g[u]){
        if(vis[v]) continue;
        dfs(v);
    } 
}
void printallpaths(int s,int d){
    bool* visited = new bool[100];
    
}

int main(){
   
    int n,m,u,v;
    cin >> n >> m;
    while(m--){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); //Comment if directed edge.
    }
    dfs(1);
    if(vis[6]) cout << "Can be reached from 1";
    else cout << "not possible";

    return 0;
}