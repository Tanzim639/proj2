#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    if(A==C && B==D){
        cout<<"NO"<<endl;
        return 0;
    }

    A=B*log(A); C=D*log(C);
    if(A>C){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
