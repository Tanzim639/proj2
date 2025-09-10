#include<bits/stdc++.h> 
using namespace std; 
#define ll long long

ll summ( ll a, ll b){
   ll n = b-a+1;
   ll ans = ( n*( (2*a) + (n-1)*1 ) )/2;
   return ans;
}

int main(){ 
   ll t; cin>>t;
   while(t--){
      ll a,b; cin>>a>>b; 
      cout<<summ(a,b)<<endl;
   }
}