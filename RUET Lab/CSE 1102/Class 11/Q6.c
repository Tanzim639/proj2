#include <stdio.h>

int f(int *num, int *result){
  for(int i=1; i<=*num; i++){
    *result*=i;
  }
  return *result;
}

void main(){
  int a;  scanf("%d", &a);  int result=1;
  printf("%d", f(&a,&result));
}


