//https://www.codechef.com/SNCKPB17/problems/SNSOCIAL/
//multisource bfs
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1000;
int g[N][N];
int level[N][N];
int n,m;
vector<pair<int,int>>movements={
    {1,0},{0,1},{-1,0},{0,-1},
    {1,1},{-1,-1},{-1,1},{1,-1}
};
bool isvalid(pair<int,int>pr){
    return pr.first>=1 && pdr.first<=n && pr.second>=1 && pr.second<=m;
}
bool vis[N][N];
void reset(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            level[i][j]=0;
            vis[i][j]=false;
        }
    }
}
int bfs(){
    int ans=0;
    int mx=g[1][1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            mx=max(mx,g[i][j]);
        }
    }
    queue<pair<int,int>>q;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(g[i][j]==mx){
                q.push({i,j});
                level[i][j]=0;
                vis[i][j]=true;
            }
        }
    }
    while(!q.empty()){
        pair<int,int>currpr=q.front();
        q.pop();
        for(auto movement: movements){
            pair<int,int>childpr={currpr.first+movement.first, currpr.second+movement.second};
            if(!isvalid(childpr))continue;
            if(vis[childpr.first][childpr.second])continue;
            q.push(childpr);
            vis[childpr.first][childpr.second]=true;
            level[childpr.first][childpr.second]=level[currpr.first][currpr.second]+1;
            ans=max(ans,level[childpr.first][childpr.second]);
        }
    }
    return ans;
}
int main(){
    int t; cin>>t;
    while(t--){
        reset();
        cin>>n>>m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>g[i][j];                
            }
        }
        cout<<bfs()<<"\n";
    }
}