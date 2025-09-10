#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define ll long long

vector<vector<int>> matMulByIter(const vector<vector<int>>& m1, const vector<vector<int>>& m2) {
    int a = m1.size();    
    int b = m1[0].size();
    int c = m2.size();    
    int d = m2[0].size(); 
    if (b != c) {
        cout << "Matrix multiplication not possible: Number of columns of the first matrix must equal the number of rows of the second matrix." << endl;
        return {{-1}};
    }
    vector<vector<int>> result(a, vector<int>(d, 0));
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            for (int k = 0; k < b; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return result;
}

vector<vector<int>> matrixAdd(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    int n = A.size();
    vector<vector<int>> resMat(n, vector<int>(n));
    for (int i = 0; i < n; ++i)for (int j = 0; j < n; ++j)resMat[i][j] = A[i][j] + B[i][j];
    return resMat;
}

vector<vector<int>> matMulByRec(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    int n = A.size();
    vector<vector<int>> matRes(n, vector<int>(n, 0));
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
    vector<vector<int>> C11 = matrixAdd(matMulByRec(A11, B11), matMulByRec(A12, B21));
    vector<vector<int>> C12 = matrixAdd(matMulByRec(A11, B12), matMulByRec(A12, B22));
    vector<vector<int>> C21 = matrixAdd(matMulByRec(A21, B11), matMulByRec(A22, B21));
    vector<vector<int>> C22 = matrixAdd(matMulByRec(A21, B12), matMulByRec(A22, B22));
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

vector<vector<int>> matrixSub(const vector<vector<int>>& A, const vector<vector<int>>& B){
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

vector<vector<int>> matMulByStr(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();    
    if (n == 1)  return {{A[0][0] * B[0][0]}};
    
    int k = n / 2;
    vector<vector<int>> A11(k, vector<int>(k)), A12(k, vector<int>(k)), A21(k, vector<int>(k)), A22(k, vector<int>(k));
    vector<vector<int>> B11(k, vector<int>(k)), B12(k, vector<int>(k)), B21(k, vector<int>(k)), B22(k, vector<int>(k));
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + k];
            A21[i][j] = A[i + k][j];
            A22[i][j] = A[i + k][j + k];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + k];
            B21[i][j] = B[i + k][j];
            B22[i][j] = B[i + k][j + k];
        }
    }
    
    auto M1 = matMulByStr(matrixAdd(A11, A22), matrixAdd(B11, B22));
    auto M2 = matMulByStr(matrixAdd(A21, A22), B11);
    auto M3 = matMulByStr(A11, matrixSub(B12, B22));
    auto M4 = matMulByStr(A22, matrixSub(B21, B11));
    auto M5 = matMulByStr(matrixAdd(A11, A12), B22);
    auto M6 = matMulByStr(matrixSub(A21, A11), matrixAdd(B11, B12));
    auto M7 = matMulByStr(matrixSub(A12, A22), matrixAdd(B21, B22));
    
    vector<vector<int>> C(n, vector<int>(n));
    auto C11 = matrixAdd(matrixSub(matrixAdd(M1, M4), M5), M7);
    auto C12 = matrixAdd(M3, M5);
    auto C21 = matrixAdd(M2, M4);
    auto C22 = matrixAdd(matrixSub(matrixAdd(M1, M3), M2), M6);
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            C[i][j] = C11[i][j];
            C[i][j + k] = C12[i][j];
            C[i + k][j] = C21[i][j];
            C[i + k][j + k] = C22[i][j];
        }
    }
    return C;
}


int main(){
    srand(time(NULL));
    int n1,m1,n2,m2;
    // cin>>n1>>m1>>n2>>m2;
    n1=1+rand()%100;
    m1=n2=1+rand()%100;
    m2=1+rand()%100;
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
            mat1[i][j]=rand()%100000;
        }
    }
    for(int i=0; i<n2; i++){
        for(int j=0; j<m2; j++){
            mat2[i][j]=rand()%100000;
        }
    }

    auto matt1=mat1, mattt1=mat1;
    auto matt2=mat2, mattt2=mat2;

    auto start1 = high_resolution_clock::now();
    //recursive matrix multiplication
    auto ans1 = matMulByRec(mat1,mat2);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);

    auto start2 = high_resolution_clock::now();
    //strassen matrix multiplication
    auto ans2 = matMulByStr(matt1, matt2);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);

    auto start3 = high_resolution_clock::now();
    //iteratuve matrix multiplication
    auto ans3 = matMulByIter(mattt1, mattt2);
    auto stop3 = high_resolution_clock::now();
    auto duration3 = duration_cast<microseconds>(stop3 - start3);

    // for(int i=0; i<n1; i++){ //printing ans matrix
    //     for(int j=0; j<m2; j++)cout<<ans1[i][j]<<" "; 
    //     cout<<endl; 
    // }

    cout<<duration1.count()<<" "<<duration2.count()<<" "<<duration3.count()<<endl; //printing runtime

}