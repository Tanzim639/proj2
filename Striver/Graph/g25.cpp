#include<bits/stdc++.h>
using namespace std;
#define ll long long

//https://www.geeksforgeeks.org/problems/eventual-safe-states/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=eventual-safe-states
vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
    vector<int> adj2[V];
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){
            adj2[it].push_back(i);
        }
    }
    adj=adj2;
    vector<int>ans;
    vector<int>indegree(V,0);
    for(int i=0; i<V; i++){
        for(auto it: adj[i]){ 
            indegree[it]++;
        }
    }
    queue<int>q;
    for(int i=0; i<V; i++){
        if(indegree[i]==0)q.push(i);
    }
    while(q.size()){
        int node = q.front();
        ans.push_back(node);
        q.pop();
        for(int c: adj[node]){
            indegree[c]--;
            if(indegree[c]==0){
                q.push(c);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){

}