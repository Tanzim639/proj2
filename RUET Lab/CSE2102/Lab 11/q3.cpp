#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool dfs(int V, vector<int>adj[], vector<int>&color, vector<bool>&vis, int v, int p, int clr){
    if(vis[v])return;
    for(auto c: adj[v]){
        if(c==p)continue;
        vis[c]=true;
        if(color[c]==color[p])return false;
        else color[c] = 1-color[p];
    }
}
bool isBipartite(int V, vector<int>adj[]){
    vector<int>color(V,-1);
    vector<bool>vis(V,false);
    for(int i=0; i<V; i++){
        if(!vis[i]){
            bool f = dfs(V,adj,color,vis,i,-1, 0);
            if(!f)return false;
        }
    }
}
int main(){
    int n,m; 
    cin>>n>>m;

}