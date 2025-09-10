#include<bits/stdc++.h>
using namespace std;
#define ll long long
//lis by O(n^2)
ll lis(vector<ll>&v){
    ll n=v.size();
    vector<ll>d(n,1);
    for(ll i=0; i<n; i++){
        for(ll j=0; j<i; j++){
            if(v[j]<v[i]){
                d[i]=max(d[i],d[j]+1);
            }
        }
    }
    ll ans=d[0];
    for(ll i=1; i<n; i++){
        ans=max(ans,d[i]);
    }
    return ans;
}
ll lds(vector<ll>&v){
    ll n=v.size();
    vector<ll>d(n,1);
    for(ll i=n-1; i>=0; i--){
        for(ll j=n-1; j>i; j--){
            if(v[j]<v[i]){
                d[i]=max(d[i],d[j]+1);
            }
        }
    }
    ll ans=d[0];
    for(ll i=1; i<n; i++){
        ans=max(ans,d[i]);
    }
    return ans;
}
int main(){
    ll n=10;
    vector<ll>v(n);
    v={8,7,4,3,0,1,2,4,6,7};
    ll ans=lis(v);
    ll ans2=lds(v);
    cout<<ans<<"\n";
    cout<<ans2<<"\n";
}