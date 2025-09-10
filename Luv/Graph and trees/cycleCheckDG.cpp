#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool dfs(int node, vector<int> adj[], vector<bool>&vis, vector<bool>&pathVis){
   vis[node]=true;
   pathVis[node]=true;
   bool isCycleExist=false;
   for(auto child: adj[node]){
      if(!vis[child]){
         isCycleExist|=dfs(child,adj,vis,pathVis);
      }else if(pathVis[child]){
         isCycleExist=true;
      }
   }
   pathVis[node]=false;
   return isCycleExist;
}

bool isCyclic(int v, vector<int> adj[]) {
   vector<bool>vis(v,false);
   vector<bool>pathVis(v,false);
   bool ans=false;
   for(int i=0; i<v; i++){
      if(!vis[i])ans|=dfs(i,adj,vis,pathVis);
   }
   return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>adj[n];
        int tmp;
        int prev;
        while(m--){
            for(int i=1; i<=n; i++){
                if(i==1)cin>>tmp;
                else{
                    cin>>tmp;
                    tmp--;
                    if(i==2){prev=tmp; continue;}
                    adj[prev].push_back(tmp);
                    prev=tmp;
                }
            }
        }
        bool ans=isCyclic(n, adj);
        if(!ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
}