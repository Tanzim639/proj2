#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    for(int i=-1000; i<=1000; i++){
        for(int j=-1000; j<=1000; j++){
            if((a*i)+(b*j)==__gcd(a,b)){
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
}