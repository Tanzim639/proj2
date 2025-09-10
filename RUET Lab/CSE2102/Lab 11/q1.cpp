//Given the vertex pairs associated to the edges of an undirected graph, find the
// degree of each vertex.
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
    map<int,int>degree;
    for(int i=0; i<n; i++){
        degree[vertex_pair[i].first]++;
        degree[vertex_pair[i].second]++;
    }
    for(auto it: degree){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}
/*
6
1 2
1 3
2 3
2 6
2 4
4 5
*/
