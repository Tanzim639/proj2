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

int Solve(int n, vector<vector<int>>& edge) {
    int m=edge.size();
    DisjointSet obj(n);
    for(auto it: edge){
        obj.unionBySize(it[0], it[1]);
    }
    int cc=0;
    for(int i=0; i<n; i++)cc+=(obj.findUPar(i)==i);
    int req=cc-1;
    if(m<n-1)return -1;
    return req;
    
}

int main(){
    int n=6;
    vector<vector<int>> edge = {
        {0,1},{0,2},{0,3},{1,2},{1,3}
    };
    cout<<Solve(n,edge)<<endl;
}