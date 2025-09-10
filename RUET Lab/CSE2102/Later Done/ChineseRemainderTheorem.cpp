#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll poww(ll a, ll b, ll mod){
    ll ans=1;
    while(b>0){
        if(b&1LL){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;
}

ll crt(vector<ll>a, vector<ll>m){
    ll sz = a.size();
    ll M = 1;
    for(auto it: m){
        M*=it;
    }
    vector<ll>Mi, invMi;
    for(auto it: m){
        Mi.push_back(M/it);
    }
    for(ll i=0; i<sz; i++){
        invMi.push_back(poww(Mi[i], m[i]-2, m[i]));
    }
    ll ans = 0;
    for(ll i=0; i<sz; i++){
        ans += ((a[i]*Mi[i]*invMi[i]))%M;
    }
    return ans%M;
}

int main(){
    vector<ll>a = {2,3,2};
    vector<ll>m = {3,5,7};
    ll ans = crt(a,m);
    cout<<ans<<endl;
}
// x % a1 = m1
// x % a2 = m2
// x % a3 = m3
// x = ?

// x = (a1M1(invM1) + a2M2(invM2) + ....) % M
