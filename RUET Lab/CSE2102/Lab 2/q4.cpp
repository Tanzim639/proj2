// 9
#include <bits/stdc++.h>
using namespace std;
int conj(int n){
    cout<<n<<" ";
    if(n==1)return 1; 
    if(n%2)return conj(3*n+1);
    else return conj(n/2);
}
int main(){
    int n ;
    cin>>n;
    conj(n);
}