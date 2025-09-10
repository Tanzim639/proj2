#include <bits/stdc++.h>
using namespace std;

long long fact(int n){
    if(n==0)return 1;
    return(n*fact(n-1));
}

long long per(int n, int r){
    return fact(n)/fact(n-r);
}

long long com(int n, int r){
    return per(n,r)/fact(r);
}

int main(){
    int n,r; scanf("%d%d", &n,&r);
    printf("nPr is %lld and nCr is %lld", per(n,r), com(n,r));
}