//module 3-35
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> matMult(vector<vector<int>>mat1, vector<vector<int>>mat2){
    int n1=mat1.size();
    int m1=mat1[0].size();
    int n2=mat2.size();
    int m2=mat2[0].size();
    vector<vector<int>>res(n1,vector<int>(m2,0));
    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
            for(int k=0; k<m1; k++){
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    return res;
}
int main(){
    int n; cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    int pwr; cin>>pwr;
    vector<vector<int>>res=mat;
    for(int i=0; i<pwr-1; i++){
        res=matMult(res,mat);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}