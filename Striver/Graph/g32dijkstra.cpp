#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> dijkstra(int V, vector<vector<int>> adj[], int S){
    set<pair<int,int>> st;
    vector<int>dist(V, 1e9);
    st.insert({0,S});
    dist[S]=0;
    while(st.size()){
        auto it = *st.begin();
        int node = it.second;
        int d = it.first;
        st.erase(it);
        for(auto c: adj[node]){
            int cnode = c[0], cdis = c[1];
            if(d+cdis < dist[cnode]){
                st.erase({dist[cnode], cnode});
                dist[cnode]=d+cdis;
                st.insert({dist[cnode], cnode});
            }
        }
    }
    return dist;
}

int main(){

}