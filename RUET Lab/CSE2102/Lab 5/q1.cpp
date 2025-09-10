#include<bits/stdc++.h>
using namespace std;
#define ll long long
// did it
int main(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)cin>>v[i];
    ll find; cin>>find;
    for(ll i=0; i<n; i++){
        if(find==v[i]){
            cout<<"Found in "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Doesnt exist"<<endl;
} 