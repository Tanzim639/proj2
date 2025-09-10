#include<bits/stdc++.h>
using namespace std;
#define ll long long


int countPaths(int n, vector<vector<int>>& roads) {
    long long mod = 1e9 + 7;
    vector<pair<long long,long long>> adj[n];
    for(auto it: roads){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }
    vector<long long>dist(n,1e17);
    vector<long long>ways(n,0);
    dist[0]=0; 
    ways[0]=1;
    set<pair<long long,long long>>q;
    q.insert({0,0});
    while(q.size()){
        auto pr = *q.begin();
        long long node = pr.second, dis = pr.first;
        q.erase(pr);
        for(auto it: adj[node]){
            long long adjNode = it.first, adjW = it.second;
            if(dist[adjNode] > dis+adjW){
                ways[adjNode] = ways[node];
                dist[adjNode] = dis+adjW;
                q.insert({dist[adjNode], adjNode});
            }else if(dist[adjNode] == dis+adjW){
                ways[adjNode] = (ways[adjNode]+ways[node])%mod;
            }
        }
    }
    return int(ways[n-1]%mod);
}

signed main(){

}