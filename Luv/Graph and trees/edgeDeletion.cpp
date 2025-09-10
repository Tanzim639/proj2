//delete  an edge of a tree so that the
//multiplication of the summation of two subtree is maximum
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
const int M=1e9+10;
vector<vector<int>>g(N,vector<int>());
vector<int>subtree_sum(N);
void dfs(int v, int p=-1){
    for(int c: g[v]){
        if(c==p)continue;
        dfs(c,v);
        subtree_sum[v]+=subtree_sum[c];
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
    dfs(1);
    ll ans=0;
    for(int i=2; i<=n; i++){
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1]-part1;
        ans=max(ans, (part1*part2*1LL)%M);
    }
    cout<<ans<<endl;
}