#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b; cin>>a>>b;
    int mx=max(a,b); int mn=min(a,b);
    if(mx%mn){
        cout<<"No Multiples"<<endl;
    }else{
        cout<<"Multiples"<<endl;
    }
}