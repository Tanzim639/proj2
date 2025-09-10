#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>segTree;
vector<ll>lazy;
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
void rangeUpdate(vector<ll>&arr, ll start, ll end, ll index, ll l, ll r, ll val){
    if(lazy[index]!=0){
        segTree[index]+=(end-start+1)*lazy[index];
        if(start!=end){
            lazy[2*index+1]+=lazy[index];
            lazy[2*index+2]+=lazy[index];
        }
        lazy[index]=0;
    }
    if(r<start || l>end)return; //disjoint
    //completely overlap
    if(start>=l && end<=r){
        segTree[index]+=(start-end+1)*val;
        if(start!=end){
            lazy[2*index+1]+=val;
            lazy[2*index+2]+=val;
        }
        return;
    }
    ll mid=(start+end)/2;
    rangeUpdate(arr,start,mid,2*index+1,l,r,val);
    rangeUpdate(arr,mid+1,end,2*index+1,l,r,val);
    segTree[index]=merge(segTree[2*index+1], segTree[2*index+2]);
}
ll querySumLazy(ll start, ll end, ll index, ll l, ll r){
    if(lazy[index]!=0){
        segTree[index]+=(start-end+1)*lazy[index];
        if(start!=end){
            lazy[2*index+1]+=lazy[index];
            lazy[2*index+2]+=lazy[index];
        }
        lazy[index]=0;
    }
    if(r<start || l>end)return 0;
    if(start>=l && end<=r){
        return segTree[index];
    }
    ll mid = (start+end)/2;
    ll leftAns = querySumLazy(start,mid,2*index+1,l,r);
    ll rightAns = querySumLazy(mid+1,end,2*index+2,l,r);
    return merge(leftAns,rightAns);
}

int main(){
    ll n; cin>>n;
    vector<ll>arr(n);
    segTree.resize(4*n,0);
    lazy.resize(4*n,0);
}