#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>segTree;
ll merge(ll a, ll b){
    return a+b;
}
void build(vector<ll>&arr, ll start, ll end, ll index){
    if(start==end){
        segTree[index] = arr[start];
        return;
    }
    ll mid = (start+end)/2;
    ll left = 2*index + 1 , right = 2*index + 2;
    build(arr,start,mid,left);
    build(arr,mid+1,end,right);
    segTree[index] = merge(segTree[left], segTree[right]);
}
void update(vector<ll>&arr, ll start, ll end, ll index, ll pos, ll val){
    if(start==end){
        arr[pos]=val;
        segTree[index]=val;
        return;
    }
    ll mid = (start+end)/2;
    ll left = 2*index + 1 , right = 2*index + 2;
    if(pos<=mid){
        update(arr,start,mid,left,pos,val);
    }else{
        update(arr,mid+1,end,right,pos,val);
    }
    segTree[index] = merge(segTree[left], segTree[right]);
}
ll query(ll start, ll end, ll index, ll l, ll r){
    //complete overlap
    if(start>=l && end<=r){
        return segTree[index];
    }
    //disjoint
    if(end<l || start>r){
        return 0;
    }
    ll mid=(start+end)/2;
    ll left = 2*index + 1 , right = 2*index + 2;
    ll leftAns = query(start, mid,left,l, r);
    ll rightAns = query(mid+1, end, right, l, r);
    return merge(leftAns,rightAns);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;
    ll m; cin>>m;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++)cin>>arr[i];
    segTree.resize(4*n,0);
    while(m--){
        ll l; cin>>l;
        cout<<query(0,n-1,0,l-1,l-1)<<"\n";
    }
}