#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b){
    return ((a*b) / __gcd(a,b));
}

ll func(vector<ll>&v){
    ll n=v.size();
    ll maxSize=0;
    for(ll i=0; i<n; i++){
        for(ll j=i; j<n; j++){
            // subarray is from i to j
            ll g=v[i], l=v[i], mult=1;
            for(ll m=i; m<=j; m++){
                g=__gcd(g,v[m]);
                l=lcm(l,v[m]);
                mult*=v[m];
            }
            if(g*l>=mult){
                maxSize=max(maxSize,j-i+1);
            }
        }
    }
    return maxSize;
}

int main(){
    vector<ll>v = {10, 2, 34, 9, 7};
    ll ans = func(v);
    cout<<ans<<endl;
}