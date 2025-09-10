//module 3-37

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>>mat1(n,vector<int>(m));
    vector<vector<int>>mat2(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat2[i][j];
        }
    }
    vector<vector<int>>meet(n,vector<int>(m));
    vector<vector<int>>join(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            meet[i][j]=(mat1[i][j]&mat2[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            join[i][j]=(mat1[i][j]|mat2[i][j]);
        }
    }
    cout<<"Join matrix:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<join[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Meet matrix:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<meet[i][j]<<" ";
        }
        cout<<endl;
    }
}