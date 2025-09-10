#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int v, vector<vector<int>>& adj, vector<bool>&vis, stack<int>&st){
    vis[v]=true;
    for(auto c: adj[v]){
        if(vis[c])continue;
        dfs(c, adj, vis, st);
    }
    st.push(v);
}

void dfs2(int v, vector<vector<int>>& adj, vector<bool>&vis){
    vis[v]=true;
    for(auto c: adj[v]){
        if(vis[c])continue;
        dfs2(c, adj, vis);
    }
}

int kosaraju(int V, vector<vector<int>>& adj){
    int n=V;
    vector<bool>vis(n,false);
    stack<int>st;
    for(int i=0; i<n; i++)if(!vis[i])dfs(i,adj,vis,st); //sorted by starting time
    vector<vector<int>> adjR(n);
    for(int i=0; i<n; i++){
        vis[i]=false;
        for(auto it: adj[i]){
            adjR[it].push_back(i);
        }
    }
    int cnt=0;
    while(st.size()){
        int i=st.top();
        st.pop();
        if(!vis[i]){
            dfs2(i,adjR,vis);
            cnt++;
        }
    }
    return cnt;
}

int main(){

}