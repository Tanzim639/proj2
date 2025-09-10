#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> sequenceOfArray(vector<ll>&v){
    ll n=v.size();
    vector<pair<ll,ll>>st;
    for(ll i=0; i<n; i++){
        st.push_back({v[i],i});
    }
    sort(st.begin(),st.end());
    vector<ll>res(n);
    for(ll i=0; i<n; i++){
        res[st[i].second]=i;
    }
    return res;
}

vector<ll>aByB(vector<ll>&a, vector<ll>&b){
    ll n=a.size();
    auto newA=a;
    sort(newA.begin(),newA.end());
    vector<ll>seq = sequenceOfArray(b);
    vector<ll>res;
    for(ll i=0; i<n; i++)res.push_back(newA[seq[i]]);
    return res;
}   


signed main(){
    vector<ll>a={1 ,4 ,2 ,7 ,3 ,5};
    vector<ll>b={7 ,6, 5 ,6 ,3 ,3};
    auto ans=aByB(b,a);
    for(auto it: ans)cout<<it<<" ";
    cout<<"\n";

}