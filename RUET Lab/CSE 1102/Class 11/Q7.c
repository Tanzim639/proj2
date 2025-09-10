#include <stdio.h>

void f(int *n, int *a){
  int i;  a[0]=0; a[1]=1;
  for(int i=2; i<=*n; i++){
    a[i]=a[i-1]+a[i-2];
  }

}

void main(){
  int n;  scanf("%d", &n);  int a[n];
  f(&n, a);
  for(int i=0; i<n; i++){
    printf("%d\t", a[i]);
  }
}


