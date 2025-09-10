#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll n,i; cin >> n;
    ll arr[n];
    for(i=0;i<n;i++)cin >> arr[i];
   
    ll ans = 0;
    ll pre = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<pre)ans = ans + pre - arr[i];
        else pre = arr[i];        
    }

    cout<< ans << endl;
}

// 3 2 5 1 7