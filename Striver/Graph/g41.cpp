#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int> bellman_ford(int v, vector<vector<int>>& edges, int src) {
    vector<int>dist(v,1e8);
    dist[src]=0;
    for(int i=0; i<v-1; i++){
        for(auto it: edges){
            int u=it[0], ver=it[1], w=it[2];
            if(dist[u]!=1e8 && dist[ver] > dist[u]+w){
                dist[ver] = dist[u]+w;
            }
        }
    }
    for(auto it: edges){
        int u=it[0], ver=it[1], w=it[2];
        if(dist[u]!=1e8 && dist[ver] > dist[u]+w){
            return {-1};
        }
    }
    return dist;
}

int main(){

}