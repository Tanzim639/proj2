// Given the ordered pairs of vertices associated to the edges of a directed graph,
// determine the in-degree and out-degree of each vertex.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>vertex_pair;
    for(int i=0; i<n; i++){
        int u,v;
        cin>>u>>v;
        vertex_pair.push_back({u,v});
    }
    map<int,int>in_degree, out_degree;
    for(int i=0; i<n; i++){
        out_degree[vertex_pair[i].first]=0;
        out_degree[vertex_pair[i].second]=0;
        in_degree[vertex_pair[i].first]=0;
        in_degree[vertex_pair[i].second]=0;
    }
    for(int i=0; i<n; i++){
        out_degree[vertex_pair[i].first]++;
        in_degree[vertex_pair[i].second]++;
    }
    cout<<"Indegree:"<<endl;
    for(auto it: in_degree){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    cout<<"Outdegree:"<<endl;
    for(auto it: out_degree){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}
/*
5
1 2
1 3
1 4
4 1
4 5
*/