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



vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
    int n = accounts.size();
    DisjointSet obj(n-1);
    map<string, int>mp;
    for(int i=0; i<n; i++){
        bool str=false;
        for(auto it: accounts[i]){
            if(!str){
                str=true;
                continue;
            }
            if(mp.count(it)){
                obj.unionBySize(mp[it], i);
            }else{
                mp[it]=i;
            }
        }
    }
    vector<vector<string>>v(n);
    for(auto it: mp){
        int node = it.second;
        node = obj.findUPar(node);
        v[node].push_back(it.first);
    }
    for(int i=0; i<n; i++)sort(v[i].begin(), v[i].end());
    for(int i=0; i<n; i++){
        if(v[i].size()){
            v[i].insert(v[i].begin(), accounts[i][0]);
        }
    }
    vector<vector<string>>ans;
    for(auto it: v){
        if(it.size())ans.push_back(it);
    }
    return ans;
}


int main(){

}