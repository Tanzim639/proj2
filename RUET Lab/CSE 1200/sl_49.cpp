#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main() {
    ll t; cin>>t;
    while(t--){
        string s; cin>>s;
        ll sz = s.size();
        for(ll i=0; i<sz-1; i++){
            cout << s[i] << " ";
        }cout<<s[sz-1]<<endl;
    }
}
