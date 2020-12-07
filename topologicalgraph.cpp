#include <bits/stdc++.h>

using namespace std;
vector<int> g[100];
stack<int> s1;
bool vis[100];

void dfs(int u){
    vis[u] = true;
    //cout << u << "->";
    for(int v:g[u]){
        if(!vis[v]){
            dfs(v);
        }
        s1.push(v);
    } 
}

void topo(int n){
    for(int i=0;i<n;i++){
        dfs(i);
    }
}


int main()
{

    int n, m, u, v;
    cin >> n >> m;
    while (m--)
    {
        cin >> u >> v;
        g[u].push_back(v);
        //g[v].push_back(u); //Comment if directed edge.
    }
    topo(n);
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
}