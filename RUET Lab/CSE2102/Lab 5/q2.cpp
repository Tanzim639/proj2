#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)cin>>v[i];
    ll find; cin>>find;
    ll low=0, high=n-1;
    ll ans=-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(v[mid]<=find){
            if(v[mid]==find){
                ans=mid;
                break;
            }
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    ans==-1? cout<<"Not found"<<endl : cout<<ans+1<<endl; 
}