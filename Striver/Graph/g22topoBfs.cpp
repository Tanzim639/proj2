#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> topoSort(int V, vector<int> adj[]) {
    vector<bool>vis(V,false);
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
    return ans;
}


int main(){

}