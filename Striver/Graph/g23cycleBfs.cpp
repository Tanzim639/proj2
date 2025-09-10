#include<bits/stdc++.h>
using namespace std;
#define ll long long

// cycle detection in directed graph by bfs (kahn)

bool isCyclic(int V, vector<int> adj[]) {
    vector<int>indegree(V,0);
    for(int i=0; i<V; i++)for(auto it: adj[i])indegree[it]++;
    vector<int>ans;
    queue<int>q;
    for(int i=0; i<V; i++)if(indegree[i]==0)q.push(i);
    while(q.size()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0)q.push(it);
        }
    }
    return (ans.size()!=V);
}

int main(){

}