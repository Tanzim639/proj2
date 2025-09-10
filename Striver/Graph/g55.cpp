#include<bits/stdc++.h>
using namespace std;
#define ll long long

int timer=1;

void dfs(int v, int p, vector<bool>&vis, vector<int>adj[], vector<int>&tin, vector<int>&low, vector<vector<int>>&bridges){
    vis[v] = true;
    tin[v] = low[v] = timer++;
    for(auto c: adj[v]){
        if(c==p)continue;
        if(vis[c]==0){
            dfs(c,v,vis,adj,tin,low,bridges);
            low[v] = min(low[v], low[c]);
            if(low[c]>tin[v]){
                bridges.push_back({c,v});
            }
        }else{
            low[v] = min(low[v], low[c]);
        }
    }
}

vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
    vector<int>adj[n];
    for(auto it: connections){
        int u = it[0], v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>vis(n,false);
    vector<int>tin(n), low(n);
    vector<vector<int>> bridges;
    dfs(0,-1,vis,adj,tin,low,bridges);
    // for(int i=0; i<n; i++)if(!vis[i])dfs(i,-1,vis,adj,tin,low,bridges); // for disconnected graph (i think)
    return bridges;
}

int main(){
    int n=10;
    vector<vector<int>> v = {
        {0,1},{1,2},{2,0},
        {3,4},{4,5},
        {7,8},{8,9},{9,7},
        {2,3},{5,7} 
    };
    auto ans = criticalConnections(n,v);
    for(auto it: ans){
        cout<<it[0]<<" "<<it[1]<<"\n";
    }
}