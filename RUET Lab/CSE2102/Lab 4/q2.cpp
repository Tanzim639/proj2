//Given an integer n, whether f(n) = n2+1 is prime or not.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin>>n;
    ll m=(n*n)+1;
    if(m==1){
        cout<<"Not Prime"<<endl;
        return 0; 
    }
    for(ll i=2; i*i<=m; i++){
        if(m%i==0){
            cout<<"Not Prime"<<endl;
            return 0;
        }
    }
    cout<<"Prime"<<endl;
}