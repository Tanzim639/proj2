#include<stdio.h>

void f(int n, int r){
     int f1=1, f2=1, f3=1;;   int n1=n-r;
     for(int i=2; i<=n; i++){
        f1*=i;
     }
     for(int i=2; i<=n1; i++){
        f2*=i;
     }
     printf("npr is %d\n", f1/f2);
     for(int i=2; i<=r; i++){
        f3*=i;
     }
     printf("ncr is %d", f1/(f2*f3) );

}

void main(){
    int a,b;  scanf("%d%d", &a,&b);
    f(a,b);
}

