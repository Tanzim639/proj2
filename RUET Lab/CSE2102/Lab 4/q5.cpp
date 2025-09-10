// [Goldbach’s Conjecture] Given an even integer n, find two prime number
// whether the sum of them is equal to n.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<ll>primes;
    for(ll i=2; i<=100000; i++){
        bool isp=true;
        for(ll j=2; j*j<=i; j++){
            if(i%j==0){
                isp=false;
                break;
            }
        } 
        if(isp)primes.push_back(i);
    }
    ll n; cin>>n;
    for(int i=0; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            if(primes[i]+primes[j]==n){
                cout<<primes[i]<<" "<<primes[j]<<endl;
                return 0;
            } 
        }
    }
}

 