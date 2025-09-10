#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll binExp(ll a, ll b, ll m){
    ll ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*a)%m;
        }
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}
int main(){
    // (50^(64^32)) % m ?
    // (a^b)%m = (a^(b%phi(m)))%m //if m is prime, then phi(m)=m-1
    ll m = 10e9 +7;
    ll num = binExp(50,binExp(64,32,m-1),m);
    cout<<num<<endl;
}