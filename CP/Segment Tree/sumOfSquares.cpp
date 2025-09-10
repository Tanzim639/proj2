//https://www.spoj.com/problems/SEGSQRSS/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

class SGTreeL {
public:
    vector<ll> lazySet, lazyInc;
    vector<pair<ll,ll>> seg;
    SGTreeL(ll n) {
        seg.resize(4 * n + 1);
        lazySet.resize(4 * n + 1, 2000); // 2000 means no set operation
        lazyInc.resize(4 * n + 1, 0);
    }

    pair<ll, ll> merge(pair<ll, ll> p1, pair<ll, ll> p2) {
        return {p1.first + p2.first, p1.second + p2.second};
    }

    void build(ll ind, ll low, ll high, vector<ll>& arr) {
        if (low == high) {
            seg[ind].first = arr[low];
            seg[ind].second = arr[low]*arr[low];
            return;
        }
        ll mid = low + (high - low) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        seg[ind] = merge(seg[2 * ind + 1] , seg[2 * ind + 2]);
    }

    void pushh(ll ind, ll low, ll high) {
        if (lazySet[ind] != 2000) { // Apply lazySet
            seg[ind].first = (high - low + 1) * lazySet[ind];
            seg[ind].second = (high - low + 1) * lazySet[ind] * lazySet[ind];
            if (low != high) { // Propagate to children
                lazySet[2 * ind + 1] = lazySet[ind];
                lazySet[2 * ind + 2] = lazySet[ind];
                lazyInc[2 * ind + 1] = 0;
                lazyInc[2 * ind + 2] = 0;
            }
            lazySet[ind] = 2000;
        }
        else if (lazyInc[ind] != 0) { // Apply lazyInc
            seg[ind].second += (high - low + 1) * lazyInc[ind] * lazyInc[ind] + 2*lazyInc[ind]*seg[ind].first; //doing first , have to use seg[ind].first unchanged
            seg[ind].first += (high - low + 1) * lazyInc[ind];
            if (low != high) { // Propagate to children
                if (lazySet[2 * ind + 1] != 2000) {
                    lazySet[2 * ind + 1] += lazyInc[ind];
                } else {
                    lazyInc[2 * ind + 1] += lazyInc[ind];
                }
                if (lazySet[2 * ind + 2] != 2000) {
                    lazySet[2 * ind + 2] += lazyInc[ind];
                } else {
                    lazyInc[2 * ind + 2] += lazyInc[ind];
                }
            }
            lazyInc[ind] = 0;
        }
    }

    void update(ll ind, ll low, ll high, ll l, ll r, ll val, bool isSet) {
        pushh(ind, low, high); 
        if (high < l || low > r) return; // No overlap
        if (low >= l && high <= r) { // Complete overlap
            if (isSet) {
                lazySet[ind] = val;
                lazyInc[ind] = 0;
            } else {
                if(lazySet[ind]!=2000)lazySet[ind] += val;
                else lazyInc[ind]+=val;
            }
            pushh(ind, low, high);
            return;
        }
        ll mid = low + (high - low) / 2;
        update(2 * ind + 1, low, mid, l, r, val, isSet);
        update(2 * ind + 2, mid + 1, high, l, r, val, isSet);
        seg[ind] = merge(seg[2 * ind + 1] , seg[2 * ind + 2]);
    }

    pair<ll,ll> query(ll ind, ll low, ll high, ll l, ll r) {
        pushh(ind, low, high);
        if (high < l || low > r) return {0,0}; // No overlap
        if (low >= l && high <= r) return seg[ind]; // Complete overlap
        ll mid = low + (high - low) / 2;
        return merge(query(2 * ind + 1, low, mid, l, r) , query(2 * ind + 2, mid + 1, high, l, r));
    }
};


signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll t;
    cin>>t;
    for(ll tc=1; tc<=t; tc++){
        cout<<"Case "<<tc<<":\n";
        ll n,q;
        cin>>n>>q;
        vector<ll>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        SGTreeL obj(n);
        obj.build(0,0,n-1,arr);
        while(q--){
            ll x;
            cin>>x;
            if(x==2){
                ll l,r;
                cin>>l>>r;
                l--;
                r--;
                ll ans = obj.query(0,0,n-1,l,r).second;
                cout<<ans<<"\n";
            }else if(x==1){
                bool isSet=false;
                ll l,r,val;
                cin>>l>>r>>val;
                l--;
                r--;
                obj.update(0,0,n-1,l,r,val,isSet);
            }else{
                bool isSet=true;
                ll l,r,val;
                cin>>l>>r>>val;
                l--;
                r--;
                obj.update(0,0,n-1,l,r,val,isSet);     
            }
        }
    }
}