//module 3- 34
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n1,m1,n2,m2;
    cout<<"Getting the product of two matrixes: "<<endl;
    cout<<"Enter first matrix row and column size: ";
    cin>>n1>>m1;
    cout<<"Enter second matrix row and column size: ";
    cin>>n2>>m2;
    int mat1[n1][m1], mat2[n2][m2];
    cout<<"Enter first matrix:"<<endl;
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter second matrix:"<<endl;
    for(int i=0; i<n2; i++){
        for(int j=0; j<m2; j++){
            cin>>mat2[i][j];
        }
    }
    if(m1!=n2){
        cout<<"Not possible"<<endl;
        return 0;
    }
    vector<vector<int>>res(n1,vector<int>(m2,0));
    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
            for(int k=0; k<m1; k++){
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    cout<<"Result:"<<endl;
    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}