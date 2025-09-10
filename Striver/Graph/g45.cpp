#include<bits/stdc++.h>
using namespace std;
#define ll long long


int spanningTree(int V, vector<vector<int>> adj[]){
    int sum=0;
    vector<int>vis(V,0);
    set<pair<int,int>> q; // {wt, node}
    q.insert({0,0});
    while(q.size()){
        auto itr = *q.begin();
        q.erase(itr);
        int node = itr.second, wt = itr.first;
        if(vis[node]) continue;
        vis[node]=true;
        sum+=wt;
        for(auto it: adj[node]){
            int adjN = it[0], adjWt = it[1];
            if(!vis[adjN]){
                q.insert({adjWt, adjN});
            }
        }
    }
    return sum;
}


int main(){

}