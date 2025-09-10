#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
const int M=1e9+10;
vector<vector<int>>g(N,vector<int>());
vector<bool>vis(N);
vector<int>level(N);
void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=true;
    while(!q.empty()){
        int curr_v = q.front();
        q.pop();
        for(int c: g[curr_v]){
            if(!vis[c]){
                q.push(c);
                vis[c]=true;
                level[c] = level[curr_v]+1; 
            }
        }
    }
}
int main(){
    int n; 
    cin>>n;
    for(int i=0; i<n-1; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for(int i=1; i<=n; i++){
        cout<<level[i]<<endl;
    }
}