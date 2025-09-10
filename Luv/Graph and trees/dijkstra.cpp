//https://leetcode.com/problems/network-delay-time/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dijkstra(vector<pair<int,int>>g[], int n, int k){
    vector<bool>vis(n+1,false);
    int inf=1e9+7;
    vector<int>dist(n+1,inf);
    set<pair<int,int>>st;
    st.insert({0,k});
    dist[k]=0;
    while(!st.empty()){
        auto curr = *st.begin();
        st.erase(st.begin());
        int currnode = curr.second;
        int currwt = curr.first;
        if(vis[currnode])continue;
        vis[currnode]=true;
        for(auto child: g[currnode]){
            int childnode = child.first;
            int childwt = child.second;
            if(dist[childnode]>dist[currnode]+childwt){
                dist[childnode]=dist[currnode]+childwt;
                st.insert({dist[childnode],childnode});
            }
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        ans=max(ans,dist[i]);
    }
    if(ans==inf)return -1;
    else return ans;
}

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pair<int,int>>g[n+1];
    for(auto time: times){
        g[time[0]].push_back({time[1],time[2]});
    }
    return dijkstra(g,n,k);
}

int main(){

}