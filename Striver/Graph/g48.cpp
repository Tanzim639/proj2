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


int numProvinces(vector<vector<int>> adj, int V) {
    DisjointSet obj(V-1);
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(adj[i][j]){
                obj.unionBySize(i,j);
            }
        }
    }
    int ans=0;
    for(int i=0; i<V; i++)ans+=(obj.findUPar(i)==i);
    return ans;
}

int main(){

}