#include<bits/stdc++.h>
using namespace std;
#define ll long long

// find bitwise or of the range a to b
ll findBitwiseOR(ll a, ll b){
    if(a==b)return a;
    if(a>b)swap(a,b);
    ll ans=0;
    for(ll i=62; i>=0; i--){
        ll bit1 = (a>>i)&1LL;
        ll bit2 = (b>>i)&1LL;
        if(bit1!=bit2){
            ans += (1LL<<(i+1))-1;
            break;
        }else{
            if(bit1)ans += (1LL<<i);
        }
    }
    return ans;
}

int main(){

}