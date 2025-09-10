#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5+10;

bool dfs(int node, int par, vector<int> adj[], vector<bool>&vis){
    vis[node]=true;
    bool isLoopExist=false;
    for(auto child: adj[node]){
        if(vis[child] && child==par)continue;
        if(vis[child]) return true;
        isLoopExist|=dfs(child, node, adj, vis);
    }
    return isLoopExist;
}

bool isCycle(int v, vector<int> adj[]) {
    vector<bool>vis(v,false);
    bool ans=false;
    for(int i=0; i<v; i++){
        if(vis[i])continue;
        ans|=dfs(i,-1,adj,vis);
    }
    return ans;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[N];
    // vector<bool>vis(N,false);
    while(m--){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // cout<<isCycle();
}