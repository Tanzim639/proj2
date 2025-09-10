//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int node ,vector<bool>&vis, vector<int>adj[]){
   vis[node]=true;
   for(auto child: adj[node]){
      if(!vis[child])dfs(child,vis,adj);
   }
}

int main(){
   int n,e;
   cin>>n>>e;
   vector<bool>vis(n+1, false);
   vector<int>adj[n+1];
   while(e--){
      int u,v; 
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
   int ans=0;
   for(int i=1; i<=n; i++){
      if(!vis[i]){
         ans++;
         dfs(i,vis,adj);
      }
   }
   cout<<ans<<"\n";
}