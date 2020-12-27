#include<iostream>
#include<bits/stdc++.h>
using namespace std;
set<int>white;//white container
set<int>grey;//grey container
set<int>black;//black container
int flag=0;
void edge(vector<int>adj[],int u,int v){
  adj[u].push_back(v);
}

//function to detect the cycle in graph
void CycleDetect(int u,vector<int>adj[]){
    white.erase(u);//remove from the white set
    grey.insert(u);//put into the grey set
    for(int i=0;i<adj[u].size();i++){
      if(white.find(adj[u][i])!=white.end())
      {
      CycleDetect(adj[u][i],adj);
        }
      if(grey.find(adj[u][i])!=grey.end()){ //check if its is present or not in grey set
        flag=1;
      }
    }
    black.insert(u);//put into the black set
    grey.erase(u);//remove from the grey set
}

int main(){
  vector<int>adj[4];//vector of array to store the graph
  
  //input for edges
//   edge(adj,0,2);
//   edge(adj,0,1);
//   edge(adj,1,3);
//   edge(adj,2,0);
//   edge(adj,3,3);
//   edge(adj,2,3);
//   edge(adj,2,4);
    edge(adj,0,1);
    edge(adj,0,2);
    edge(adj,1,2);
    edge(adj,2,3);
    edge(adj,2,0);
    edge(adj,3,3);

  for(int i=0;i<4;i++){
    white.insert(i);
  }
  CycleDetect(0,adj);
  if(flag==0)cout<<"Graph does not contain cycle"<<endl;
  else
  cout<<"Graph contain cycle"<<endl;
  return 0;
}