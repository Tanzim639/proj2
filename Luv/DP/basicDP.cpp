#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+10;
//top down aproach
// ll dp[N];
// ll fib(ll n){
//     if(n==0)return 0;
//     if(n==1)return 1;
//     if(dp[n]!=-1)return dp[n]; //memoise
//     return dp[n]=fib(n-1)+fib(n-2);
// }
//bottom up aproach
ll dp2[N];
ll fib2(ll n){
    if(n==0) return 0;
    if(n==1) return 1;
    ll dp2[N];
    dp2[0] = 0;
    dp2[1] = 1;
    for(int i = 2; i <= n; i++){
        dp2[i] = dp2[i-1] + dp2[i-2];
    }
    return dp2[n];
}
int main(){
    // fill(dp,dp+N,-1);
    // for(ll i=0; i<=100; i++){
    //     cout<<i<<" ---> "<<fib(i)<<endl;
    // }
    fill(dp2,dp2+N,-1);
    for(ll i=0; i<=100; i++){
        cout<<i<<" ---> "<<fib2(i)<<endl;
    }  
}