#include<stdio.h>

int npr(int n, int r){
     int f1=1, f2=1;   int n1=n-r;
     for(int i=2; i<=n; i++){
        f1*=i;
     }
     for(int i=2; i<=n1; i++){
        f2*=i;
     }
     return f1/f2;
}

void main(){
    int a,b;  scanf("%d%d", &a,&b);
    printf("%d", npr(a,b));
}

