


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e2+10;
// vector<int>dp(N,-1);
vector<int>v(N);

int dp[10009];
int func(vector<int>& coins, int amount, int ans){
    if(amount==0)ans++;
    // if(dp[amount]!=-1)return dp[amount];
    int ans = 0;
    for(int coin: coins){
        if(amount-coin<0)continue;
        // ans = min(ans+0LL , func(coins ,amount-coin)+1LL);
        if(func(coins,amount-coin)==0)ans+=1;
        
    }
    return  ans;
}
int change(int amount, vector<int>& coins) {
    for(int i=0; i<10009; i++)dp[i]=-1;
    int ans = func(coins,amount);
    return ans;
}
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    // int n=3;
    // v={3,2,1};
    // for(int i=0; i<4; i++)cout<<v[i]<<" "; cout<<endl;
    int ans=1;
    for(int i=0; i<n; i++){
        // cout<<i<<" --> "<<lis(i)<<endl;
        ans=max(ans,lis(i));
    }
    cout<<ans<<endl;
}
*/