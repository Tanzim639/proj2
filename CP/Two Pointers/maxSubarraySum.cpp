//find the maximum subarray sum
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    ll currsum=v[0];
    ll maxsum=v[0];
    for(ll i=1; i<n; i++){
        if(currsum<0){
            currsum=0;
        }
        currsum=currsum+v[i];
        maxsum=max(maxsum,currsum);
    }
    cout<<maxsum<<endl;
}