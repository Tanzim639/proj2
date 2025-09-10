#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll kthodd(ll k){
    ll ans = 2*k -1;
    return ans;
}
ll ktheven(ll k){
    ll ans = 2*k ;
    return ans;
}   
int main(){    
    ll t=1;
    while(t--){
        ll n,k; cin>> n >> k;
        if(n%2==0){
            if(k<=(n/2)){
                cout<<kthodd(k)<<endl;;
            }else{
                k-=(n/2);
                cout<<ktheven(k)<<endl;
            }
        }else{
            if(k<=(n/2)+1){
                cout<<kthodd(k)<<endl;
            }else{
                k-=(n/2)+1;
                cout<<ktheven(k)<<endl;
            }
        }

    }
}
