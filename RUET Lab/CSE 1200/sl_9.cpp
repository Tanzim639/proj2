#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n; cin>>n;
    ll ts = (n*(n+1))/2; ll sum=0;
    for(ll i=0; i<n-1; i++){
        ll tmp; cin>>tmp; sum+=tmp;
    }
    cout<<ts-sum<<endl;
}