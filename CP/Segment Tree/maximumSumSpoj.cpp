//https://www.spoj.com/problems/KGSS/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>

class SGTree{
    public:
    vector<pll>seg; // sum, mx
    SGTree(ll n){
        seg.resize(4*n + 1);
    }
    pll merge(pll a, pll b){
        return {max(max(a.first, b.first), a.second+b.second), max(a.second, b.second)};
    }
    // ind = segtree index,, (low,high) = node range
    void build(ll ind, ll low, ll high, vector<ll>&arr){
        if(low==high){
            seg[ind].first = arr[low];
            seg[ind].second = arr[low];
            return;
        }
        ll mid = low+(high-low)/2;
        build(2*ind + 1, low, mid, arr);
        build(2*ind + 2, mid+1, high, arr);
        seg[ind] = merge(seg[2*ind+1], seg[2*ind+2]);
    }
    // (l,r) = range query
    pll query(ll ind, ll low, ll high, ll l, ll r){
        //no overlap
        //l r  low high   or   low high l r
        if(r<low || l>high){
            return {0,0}; // change this as needed
        }
        //complete overlap
        // l low high r
        if(low>=l && high<=r){
            return seg[ind];
        }
        ll mid = low+(high-low)/2;
        pll left = query(2*ind+1, low, mid, l, r);
        pll right = query(2*ind+2, mid+1, high, l, r);
        return merge(left,right);
    }
    void update(ll ind, ll low, ll high, ll i, ll val){
        if(low==high){
            seg[ind].first = val;
            seg[ind].second = val;
            return;
        }
        ll mid = low+(high-low)/2;
        if(i<=mid) update(2*ind+1, low, mid, i, val);
        else update(2*ind+2, mid+1, high, i, val);
        seg[ind] = merge(seg[2*ind+1], seg[2*ind+2]);
    }
};


signed main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++)cin>>arr[i];
    SGTree obj(n);
    obj.build(0,0,n-1,arr);
    ll q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        if(c=='Q'){
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            cout<<obj.query(0,0,n-1,l,r).first<<endl;
        }else{
            ll i,val;
            cin>>i>>val;
            i--;
            obj.update(0,0,n-1,i,val);
        }
    }
}