#include<bits/stdc++.h>
using namespace std;
#define  ll long long

vector<vector<ll>> add(const vector<vector<ll>>& A, const vector<vector<ll>>& B){
    ll n = A.size();
    vector<vector<ll>> C(n, vector<ll>(n));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

vector<vector<ll>> sub(const vector<vector<ll>>& A, const vector<vector<ll>>& B){
    ll n = A.size();
    vector<vector<ll>> C(n, vector<ll>(n)); 
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

vector<vector<ll>> matrix_mult(const vector<vector<ll>>& A, const vector<vector<ll>>& B) {
    ll n = A.size();    
    if (n == 1)  return {{A[0][0] * B[0][0]}};
    
    ll k = n / 2;
    vector<vector<ll>> A11(k, vector<ll>(k)), A12(k, vector<ll>(k)), A21(k, vector<ll>(k)), A22(k, vector<ll>(k));
    vector<vector<ll>> B11(k, vector<ll>(k)), B12(k, vector<ll>(k)), B21(k, vector<ll>(k)), B22(k, vector<ll>(k));
    
    for (ll i = 0; i < k; i++) {
        for (ll j = 0; j < k; j++) {
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
    
    auto M1 = matrix_mult(add(A11, A22), add(B11, B22));
    auto M2 = matrix_mult(add(A21, A22), B11);
    auto M3 = matrix_mult(A11, sub(B12, B22));
    auto M4 = matrix_mult(A22, sub(B21, B11));
    auto M5 = matrix_mult(add(A11, A12), B22);
    auto M6 = matrix_mult(sub(A21, A11), add(B11, B12));
    auto M7 = matrix_mult(sub(A12, A22), add(B21, B22));
    
    vector<vector<ll>> C(n, vector<ll>(n));
    auto C11 = add(sub(add(M1, M4), M5), M7);
    auto C12 = add(M3, M5);
    auto C21 = add(M2, M4);
    auto C22 = add(sub(add(M1, M3), M2), M6);
    
    for (ll i = 0; i < k; i++) {
        for (ll j = 0; j < k; j++) {
            C[i][j] = C11[i][j];
            C[i][j + k] = C12[i][j];
            C[i + k][j] = C21[i][j];
            C[i + k][j + k] = C22[i][j];
        }
    }
    return C;
}

signed main() { 
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if(b != c){
        cout << "Not popssible\n";
        return 0;
    }

    ll n=0;
    ll mx=max(a,b);
    ll cnt=0, mxbit=0;
    for(ll i=0; i<=31; i++){
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
    mx=n;

    vector<vector<ll>> A(mx, vector<ll>(mx, 0)), B(mx, vector<ll>(mx, 0)), C(mx, vector<ll>(mx, 0));    

    for(ll i = 0; i < a; ++i){
        for(ll j = 0; j < b; ++j)
            cin >> A[i][j];
    }

    for(ll i = 0; i < c; ++i){
        for(ll j = 0; j < d; ++j)
            cin >> B[i][j];
    }

    C = matrix_mult(A, B);

    for(ll i = 0; i < a; ++i){
        for(ll j = 0; j < d; ++j){
            cout << C[i][j] << ' ';
        }
        cout << '\n';
    }
}
