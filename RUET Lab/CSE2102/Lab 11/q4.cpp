#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; 
    cin>>n;
    vector<pair<int,int>>vertexes;
    int mx = -1;
    for(int i=0; i<n; i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        mx = max(mx, max(u,v));
        vertexes.push_back({u,v});
    }
    vector<vector<int>>arr(mx+1, vector<int>(mx+1,0));
    for(auto it: vertexes){
        arr[it.first][it.second]++;
    }
    for(auto v: arr){
        for(auto num: v){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
/*
7
1 2
1 2
1 4
4 1
1 3
3 3
4 5
*/