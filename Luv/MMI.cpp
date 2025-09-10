//MMI
//nCr
// ncr = n! / (n-r)!r!
//A^(-1) = (A^(M-2)) % M (M is prime and A isnt multiple of M)
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e6+10;
const ll M=1e9+7;
ll fact[N];
ll binExp(ll a, ll b){
    ll ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*a)%M;
            b--;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}
int main(){
    fact[0]=1;
    for(ll i=1; i<N; i++){
        fact[i]=(fact[i-1]*i)%M;
    }
    ll q=1;
    // cin>>q;
    while(q--){
        ll n,r; 
        cin>>n>>r;
        ll ans=fact[n];
        ll den = (fact[n-r]*fact[r])%M;
        den=binExp(den,M-2);
        ans = ((ans%M) * (den%M))%M ;
        cout<<ans<<"\n";
    }
}