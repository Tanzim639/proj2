//minimum spanning tree
// Finding a tree from a bidirectional graph with the minimum edge cost
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
int parent[N];
int size[N];
void make(int v){
    parent[v]=v;
    size[v]=1;
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
        //union by size
        if(size[a]<size[b])swap(a,b);
        parent[b]=a;
        size[a]+=size[b];
    }
}
//find the number of distict connected componenets
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>>edges;
    for(int i=0; i<m; i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    sort(edges.begin(),edges.end());
    for(int i=1; i<=n; i++)make(i);
    int total_cost=0;
    for(auto &edge: edges){
        int wt=edge.first;
        int u=(edge.second).first;
        int v=(edge.second).second;
        //if same parent, cant add them (they will create loop)
        if(find(u)==find(v))continue;
        Union(u,v);
        total_cost+=wt;
    }
    cout<<total_cost<<endl;
}
/*
6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 5
1 2 2
3 2 3
3 6 8
2 6 7
*/