#include<bits/stdc++.h>
using namespace std;
#define ll long long

class SGTreeL{
    public:
    vector<ll>seg;
    vector<bool>lazy;
    SGTreeL(ll n){
        seg.resize(4*n+1, 0);
        lazy.resize(4*n+1, false);
    }
    void build(ll ind, ll low, ll high, vector<ll>&arr){
        if(low==high){
            seg[ind] = arr[low];
            return;
        }
        ll mid = low+(high-low)/2;
        build(2*ind+1, low, mid, arr);
        build(2*ind+2, mid+1, high, arr);
        seg[ind] = seg[2*ind+1]+seg[2*ind+2];
    }
    void pushh(ll ind, ll low, ll high){
        // update the previous remaining update
        if(lazy[ind]){
            seg[ind]=(high-low+1)-seg[ind];
            // propagate the lazy update downwards
            if(low!=high){
                lazy[2*ind+1]=1-lazy[2*ind+1];
                lazy[2*ind+2]=1-lazy[2*ind+2];
            }
            lazy[ind]=false;
        }
    }
    // low and high are the nodes range in segment tree.... l and r are the query range
    void update(ll ind, ll low, ll high, ll l, ll r){
        pushh(ind,low,high);
        // no overlap ..  low high l r .. or.. l r low high
        if(high<l || r<low){
            return;
        }
        // complete overlap..  l low high r 
        if(low>=l && high<=r){
            lazy[ind]=1-lazy[ind];
            pushh(ind,low,high);
            return;
        }
        // partial overlap
        ll mid = low+(high-low)/2;
        update(2*ind+1, low, mid, l, r);
        update(2*ind+2, mid+1, high, l, r);
        seg[ind] = seg[2*ind+1]+seg[2*ind+2];
    }
    ll query(ll ind, ll low, ll high, ll l, ll r){
        pushh(ind,low,high);
        if(high<l || r<low){
            return 0;
        }
        if(low>=l && high<=r){
            return seg[ind];
        }
        ll mid = low+(high-low)/2;
        ll left = query(2*ind+1, low, mid, l, r);
        ll right = query(2*ind+2, mid+1, high, l, r);
        return left+right;
    }
};

int main(){
    ll n,m;
    cin>>n>>m;
    SGTreeL obj(n);
    vector<ll>arr(n,0);
    obj.build(0,0,n-1,arr);
    while(m--){
        ll x;
        cin>>x;
        if(x==0){
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            obj.update(0,0,n-1,l,r);
        }else{
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            ll ans = obj.query(0,0,n-1,l,r);
            cout<<ans<<"\n";
        }
    }
}