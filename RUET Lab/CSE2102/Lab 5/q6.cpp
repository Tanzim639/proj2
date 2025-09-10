#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ack(ll m, ll n){
    if(m==0)return n+1;
    else if(m!=0 && n==0)return ack(m-1,1);
    else return ack(m-1, ack(m,n-1));
}
int main(){
    ll m,n; cin>>m>>n;
    cout<<ack(m,n)<<endl;
}