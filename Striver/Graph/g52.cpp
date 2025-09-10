#include<bits/stdc++.h>
using namespace std;
#define ll long long

class DisjointSet {
public:
    vector<int> rank, parent, Size;
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

int func(int i, int j, int n){
    return (i*n)+j;
}

int MaxConnection(vector<vector<int>>& grid) {
    int n = grid.size();
    DisjointSet obj(n*n - 1);
    int delx[] = {1,0,-1,0};
    int dely[] = {0,1,0,-1};
    int zc=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!grid[i][j])zc++;
            if(grid[i][j]){
                for(int k=0; k<4; k++){
                    int newx = i+delx[k];
                    int newy = j+dely[k];
                    if(newx<0 || newx>=n || newy<0 || newy>=n)continue;
                    if(grid[newx][newy]){
                        obj.unionBySize(func(i,j,n), func(newx,newy,n));
                    }
                }
            }
        }
    }
    int ans=0;
    if(!zc)return (n*n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!grid[i][j]){
                set<int>st;
                int curr=0;
                for(int k=0; k<4; k++){
                    int newx = i+delx[k];
                    int newy = j+dely[k];
                    if(newx<0 || newx>=n || newy<0 || newy>=n)continue;
                    if(grid[newx][newy]){
                        if(st.count(obj.findUPar(func(newx,newy,n)))){
                            continue;
                        }else{
                            st.insert(obj.findUPar(func(newx,newy,n)));
                            curr+=obj.Size[obj.findUPar(func(newx,newy,n))];
                        }
                    }
                }
                ans=max(ans,curr+1);
            }
        }
    }
    return ans;
}



int main(){

}