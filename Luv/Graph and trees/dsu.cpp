#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;

int parent[N];
int Size[N];

void make(int v){
    parent[v]=v;
    Size[v]=1;
}

int find(int v){ //who's the ancestor
    if(v==parent[v])return v;
    //path compression
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){
    a=find(a);
    b=find(b);   
    if(a!=b){
        //union by Size
        if(Size[a]<Size[b])swap(a,b);
        parent[b]=a;
        Size[a]+=Size[b];
    }
}
//find the number of distict connected componenets
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        make(i);
    }
    while(k--){
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    int connected_ct=0;
    // roots=connected components
    for(int i=1; i<=n; i++){
        if(find(i)==i)connected_ct++;
    }
    cout<<connected_ct<<"\n";
}