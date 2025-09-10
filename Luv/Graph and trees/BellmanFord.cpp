//https://www.eolymp.com/en/problems/1453
//Bellman Ford
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = 1e15;
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>ans(n+1);
    vector<pair<ll,ll>>g[n+1];
    vector<vector<ll>>tup(m);
    for(ll i=0; i<m; i++){
        ll a,b,c;
        cin>>a>>b>>c; 
        tup[i]={a,b,c};
        g[a].push_back({b,c});
    }
    for(ll i=0; i<=n; i++){
        if(i==1)ans[i]=0;
        else ans[i]=inf;
    }
    for(ll i=1; i<=n-1; i++){
        for(ll j=0; j<m; j++){
            if(ans[tup[j][0]]!=inf)ans[tup[j][1]]=min(ans[tup[j][1]] , ans[tup[j][0]]+tup[j][2]);
        }
    }
    for(ll i=1; i<=n; i++){
        cout<<min(30000LL,ans[i])<<" ";
    }
    cout<<"\n";
}