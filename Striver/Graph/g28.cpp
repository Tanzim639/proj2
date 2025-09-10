#include<bits/stdc++.h>
using namespace std;
#define ll long long


// https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-undirected-graph-having-unit-distance
vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
    vector<int>adj[N];
    for(auto it: edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    vector<bool>vis(N,false);
    vis[src]=true;
    vector<int>ans(N,1e9);
    queue<int>q;
    q.push(src);
    ans[src]=0;
    while(q.size()){
        int node = q.front();
        q.pop();
        vis[node]=true;
        for(auto c: adj[node]){
            if(ans[c]>ans[node]+1){
                ans[c] = ans[node]+1;
                q.push(c);
            }
        }
    }
    for(auto &it: ans){
        if(it==1e9)it = -1;
    }
    return ans;
}

int main(){

}