#include<bits/stdc++.h>
using namespace std;
#define ll long long

class SGTree{
    public:
    vector<ll>seg;
    SGTree(ll n){
        seg.resize(4*n + 1);
    }
    ll merge(ll a, ll b){
        return min(a,b);
    }
    // ind = segtree index,, (low,high) = node range
    void build(ll ind, ll low, ll high, vector<ll>&arr){
        if(low==high){
            seg[ind] = arr[low];
            return;
        }
        ll mid = low+(high-low)/2;
        build(2*ind + 1, low, mid, arr);
        build(2*ind + 2, mid+1, high, arr);
        seg[ind] = merge(seg[2*ind+1], seg[2*ind+2]);
    }
    // (l,r) = range query
    ll query(ll ind, ll low, ll high, ll l, ll r){
        //no overlap
        //l r  low high   or   low high l r
        if(r<low || l>high){
            return LONG_LONG_MAX; // change this as needed
        }
        //complete overlap
        // l low high r
        if(low>=l && high<=r){
            return seg[ind];
        }
        ll mid = low+(high-low)/2;
        ll left = query(2*ind+1, low, mid, l, r);
        ll right = query(2*ind+2, mid+1, high, l, r);
        return merge(left,right);
    }
    void update(ll ind, ll low, ll high, ll i, ll val){
        if(low==high){
            seg[ind] = val;
            return;
        }
        ll mid = low+(high-low)/2;
        if(i<=mid) update(2*ind+1, low, mid, i, val);
        else update(2*ind+2, mid+1, high, i, val);
        seg[ind] = merge(seg[2*ind+1], seg[2*ind+2]);
    }
};


signed main(){

}