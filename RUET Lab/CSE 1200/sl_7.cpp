#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    if(n==2){
        cout<<"YES"<<endl; return 0;
    }
    int sr= sqrt(n)+1;
    for(int i=2; i<=sr; i++){
        if(n%i==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}