#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll func(ll a, ll n){
    if(n==1)return a;
    return func(a,n-1)*a;
}
int main(){
    ll a,n; cin>>a>>n;
    cout<<func(a,n)<<endl;
}