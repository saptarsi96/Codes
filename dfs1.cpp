// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph

*/
void dfsutil(vector<int> g[],vector<int> &ans,vector<bool> &vis,int u){
    
    vis[u] = true;
    ans.push_back(u);
    for(int i:g[u]){
        if(!vis[i]){
            dfsutil(g,ans,vis,i);
        }
    }
}

vector <int> dfs(vector<int> g[], int N)
{
    
    vector<bool> vis(N,false);
    //memset(vis,false,sizeof(vis));
    vector<int> ans;
    for(int u=0;u<N;u++){
        if(vis[u]==false){
            dfsutil(g,ans,vis,u);
        }
    }
    return ans;

}


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];

        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends