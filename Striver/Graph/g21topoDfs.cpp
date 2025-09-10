#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int v, int V, vector<int> adj[], stack<int>&st, vector<bool>&vis){
    vis[v]=true;
    for(auto c: adj[v]){
        if(!vis[c])dfs(c,V,adj,st,vis);
    }
    st.push(v);
}

vector<int> topoSort(int V, vector<int> adj[]) {
    stack<int>st;
    vector<bool>vis(V,false);
    vector<int>ans;
    for(int i=0; i<V; i++)if(!vis[i])dfs(i,V,adj,st,vis);
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main(){

}