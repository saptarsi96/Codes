#include<bits/stdc++.h>

using namespace std;
vector<int> g[100];
bool vis[100];

void bfs(int u){

    queue<int> q;
    q.push(u);
    vis[u] = true;
    while(!q.empty()){

        int f = q.front();
        q.pop();
        cout << f << "->";
        for(int i:g[f]){
            if(!vis[i]){
                q.push(i);
                vis[i] = true;
            }
        }        
    }
}

int main(){
   
    int n,m,u,v;
    cin >> n >> m;
    while(m--){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); //Comment if directed edge and a directed graph.
    }
    bfs(0);
    // if(vis[6]) cout << "Can be reached from 1";
    // else cout << "not possible";

    // return 0;
}