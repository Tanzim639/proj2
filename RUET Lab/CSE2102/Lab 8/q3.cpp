#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll M=1e9 + 7;
ll BE(ll a, ll b){
    ll ans=1;
    a%=M;
    while(b>0){
        if(b&1) ans=(ans*a)%M;
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}
int main(){
    cout<<BE(5,3)<<endl;
}