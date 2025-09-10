#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n){
    if(n==1)return false;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    for(ll i=1; i<=30; i++){
        ll num = (1LL<<i) - 1;
        if(isPrime(num)){
            cout<<i<<" -> "<<num<<endl;
        }
    }
}