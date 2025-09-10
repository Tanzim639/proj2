#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> matrixAdd(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    int n = A.size();
    vector<vector<int>> resMat(n, vector<int>(n));
    for (int i = 0; i < n; ++i)for (int j = 0; j < n; ++j)resMat[i][j] = A[i][j] + B[i][j];
    return resMat;
}


vector<vector<int>> matrixMult(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    int n = A.size();
    vector<vector<int>> matRes(n, vector<int>(n, 0));
    // base case
    if (n == 1) {
        matRes[0][0] = A[0][0] * B[0][0];
        return matRes;
    }
    vector<vector<int>> A11(n/2, vector<int>(n/2)), A12(n/2, vector<int>(n/2)), A21(n/2, vector<int>(n/2)), A22(n/2, vector<int>(n/2)), B11(n/2, vector<int>(n/2)), B12(n/2, vector<int>(n/2)), B21(n/2, vector<int>(n/2)), B22(n/2, vector<int>(n/2));
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < n/2; ++j) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + n/2];
            A21[i][j] = A[i + n/2][j];
            A22[i][j] = A[i + n/2][j + n/2];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + n/2]; 
            B21[i][j] = B[i + n/2][j];
            B22[i][j] = B[i + n/2][j + n/2]; 
        }
    }
    vector<vector<int>> C11 = matrixAdd(matrixMult(A11, B11), matrixMult(A12, B21));
    vector<vector<int>> C12 = matrixAdd(matrixMult(A11, B12), matrixMult(A12, B22));
    vector<vector<int>> C21 = matrixAdd(matrixMult(A21, B11), matrixMult(A22, B21));
    vector<vector<int>> C22 = matrixAdd(matrixMult(A21, B12), matrixMult(A22, B22));
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < n/2; ++j) {
            matRes[i][j] = C11[i][j];
            matRes[i][j + n/2] = C12[i][j];
            matRes[i + n/2][j] = C21[i][j];
            matRes[i + n/2][j + n/2] = C22[i][j];
        }
    }
    return matRes;
}


int main(){
    int n1,m1,n2,m2;
    cin>>n1>>m1>>n2>>m2;
    if(m1!=n2){
        cout<<"Invalid"<<endl;
    }
    int n=0;
    int mx=max(n1,m1);
    int cnt=0, mxbit=0;
    for(int i=0; i<=31; i++){
        if((mx>>i)&1){
            cnt++;
            mxbit=i;
        }
    }
    if(cnt==1){
        n=mx;
    }else{
        n=(1<<(mxbit+1));
    }
    vector<vector<int>> mat3(n, vector<int>(n,0)), mat1(n, vector<int>(n,0)), mat2(n, vector<int>(n,0));
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0; i<n2; i++){
        for(int j=0; j<m2; j++){
            cin>>mat2[i][j];
        }
    }
    
    auto ans = matrixMult(mat1,mat2);
    vector<vector<int>>realAns(n1, vector<int>(m2));
    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
            realAns[i][j]=ans[i][j];
        }
    }
    for(auto it: realAns){
        for(auto itr: it){
            cout<<itr<<" ";
        }
        cout<<endl;
    }

}