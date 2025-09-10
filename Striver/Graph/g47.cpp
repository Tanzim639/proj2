#include<bits/stdc++.h>
using namespace std;
#define ll long long



  class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
class Solution
{
public:
int spanningTree(int V, vector<vector<int>> adj[]){
    DisjointSet obj(V);
    vector<pair<int, pair<int,int>>>edges;
    for(int i=0; i<V; i++){
        for(auto &it: adj[i]){
            
            if(it[0]<i)edges.push_back({it[1], {i,it[0]}});
        }
    }
    sort(edges.begin(), edges.end());
    int ans=0;
    for(auto it: edges){
        int wt=it.first, node1=it.second.first, node2=it.second.second;
        if(obj.findUPar(node1)==obj.findUPar(node2)){
            continue;
        }
        ans+=wt;
        obj.unionBySize(node1,node2);
    }
    return ans;
}
};


int main(){

}