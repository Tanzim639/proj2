#include<bits/stdc++.h> 
using namespace std;
#define ll long long
ll ncr(ll n, ll r){
    ll mx = max(r,(n-r));
    ll mn = min(r,(n-r));
    ll mnF=1;
    for(int i=1; i<=mn; i++){
        mnF*=i;
    }
    ll haha=1;
    for(int i=n; i!=mx; i--){
        haha*=i;
    }
    ll ans = haha/mnF;
    return ans;
}

int main() {
    ll n,r; cin>>n>>r;
    cout<<ncr(n,r)<<endl;
}
