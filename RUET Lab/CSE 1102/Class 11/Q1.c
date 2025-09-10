#include <stdio.h>
void main(){
  int a=5, b=9;
  int *pa=&a; int *pb=&b;
  int temp;  int *pt=&temp;
  temp=*pa;  *pa=*pb;  *pb=temp;
  printf("%d  %d", a,b);


}

