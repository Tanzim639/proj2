#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Given a positive integer n, list all the combinations of the set {1, 2, 3,...,n}.
int main(){
    ll n;
    n=5;
    vector<ll>v(n);
    for(ll i=1; i<=n; i++)v[i-1]=i;
    vector<vector<ll>>ans;
    for(ll i=0; i<(1<<n); i++){
        vector<ll>tmpv;
        for(ll j=0; j<n; j++){ 
            if((i>>j)&1){
                tmpv.push_back(v[j]);
            }
        }
        ans.push_back(tmpv);
    }
    sort(ans.begin(), ans.end());
    for(auto vc: ans){ 
        for(auto ele: vc){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}