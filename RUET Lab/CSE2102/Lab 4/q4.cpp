// Given two positive integers, find their least common multiple.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b){
    if (a == 0)return b;
    return gcd(b % a, a);
}
int main(){
    ll a,b; cin>>a>>b;
    cout<<(a*b)/gcd(a,b)<<endl;
}

  