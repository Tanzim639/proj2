//Given two positive integers, find their greatest common divisor using the
// Euclidean algorithm.
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int gcd(int a, int b){
    if (a == 0){
        return b;
    }
    return gcd(b % a, a);
}
int main(){
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}

  