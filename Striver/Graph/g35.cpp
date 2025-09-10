#include<bits/stdc++.h>
using namespace std;
#define ll long long



vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0; i<edges.size(); i++){
        adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        adj[edges[i][1]].push_back({edges[i][0], edges[i][2]});
    }
    vector<int>dist(n+1,1e9);
    vector<int>par(n+1,0);
    for(int i=0; i<=n; i++)par[i]=i;
    // set<pair<int,int>> st;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> st;
    // st.insert({0,1});
    st.push({0,1});
    dist[1]=0;
    while(st.size()){
        // auto it = *st.begin();
        auto it = st.top();
        int node = it.second;
        int dis = it.first;
        // st.erase(it);
        st.pop();
        for(auto c: adj[node]){
            int cnode = c.first, cdis = c.second;
            if(cdis+dis<dist[cnode]){
                par[cnode]=node;
                // st.erase({dist[cnode], cnode});
                dist[cnode] = cdis+dis;
                // st.insert({dist[cnode], cnode});
                st.push({dist[cnode], cnode});
            }
        }
    }
    if(dist[n]==1e9)return {-1};
    vector<int>ans;
    int ind = n;
    while(1){
        ans.push_back(ind);
        if(ind==1)break;
        ind = par[ind];
    }
    // reverse(ans.begin(), ans.end());
    ans.insert(ans.begin(), dist[n]);
    // for(auto it: ans)cout<<it<<"  "; cout<<endl;
    // if(ans[0]==1)return ans;
    // return {-1};
    return ans;
}






int main()
{
    int n = 5, m = 6;
    vector<vector<int>> edges = {
        {1,2,2},
        {2,5,5},
        {2,3,4},
        {1,4,1},
        {4,3,3},
        {3,5,1},
    };
    shortestPath(5,6,edges);
}

