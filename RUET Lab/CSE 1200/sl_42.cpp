#include<bits/stdc++.h> 
#define ll long long
using namespace std; 
int main(){ 
    int t;cin>>t; 
    while(t--){ 
        ll n;cin>>n; 
        ll k=n/2; 
        if(k%2!=0){cout<<"NO"<<endl;} 
        else{ 
            cout<<"YES"<<endl; 
            ll sum1=(k/2)*(4+(k-1)*2); 
            ll sum2=((k-1)*(2+(k-2)*2))/2; 
            ll q=sum1-sum2; 
            for(int i=1;i<=k;i++){ 
                cout<<2*i<<" "; 
            } 
            for(int i=0;i<k-1;i++){ 
                cout<<2*i+1<<" "; 
            } 
            cout<<q<<endl;     
        } 
    } 
}