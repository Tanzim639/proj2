//module 3-36

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]!=mat[j][i]){
                cout<<"Not symmetric"<<endl;
                return 0;
            }
        }
    }
    cout<<"Symmetric"<<endl;
}