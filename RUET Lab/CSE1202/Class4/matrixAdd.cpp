#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n; cin>>m>>n;
    int mat1[m][n], mat2[m][n], r[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            r[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<r[i][j]<<" ";
        }cout<<endl;
    }

}