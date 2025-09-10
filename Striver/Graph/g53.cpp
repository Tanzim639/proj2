#include<bits/stdc++.h>
using namespace std;
#define ll long long

class DisjointSet {
    vector<int> rank, parent, Size;
public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        Size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            Size[i] = 1;
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
        if (Size[ulp_u] < Size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            Size[ulp_v] += Size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            Size[ulp_u] += Size[ulp_v];
        }
    }
};

int maxRemove(vector<vector<int>>& stones, int n) {
    DisjointSet obj(n-1);
    map<int,int> mpx, mpy; 
    for(int i=0; i<n; i++){
        int x = stones[i][0], y = stones[i][1];
        if(mpx.count(x)){
            obj.unionBySize(i,mpx[x]);
        }else{
            mpx[x]=i;
        }
        if(mpy.count(y)){
            obj.unionBySize(i,mpy[y]);
        }else{
            mpy[y]=i;
        }
    }
    int cc=0;
    for(int i=0; i<n; i++)cc+=obj.findUPar(i)==i;
    return n-cc;
}


int main(){

}