// doing a^b
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b,m;
    cin>>a>>b>>m;
    ll res=1;
    while(b){
        if(b%2){
            b--;
            res=(res*a)%m;
        }else{
            a=(a*a)%m;
            b/=2;
        }
    }
    cout<<res<<endl;
} 