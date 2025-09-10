#include <stdio.h>
void main(){
  int n;  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  int *ptr=arr;
  int sum=0;
  for(int i=0; i<n; i++){
    sum+=*ptr;
    ptr++;
  }
  printf("%d\n", sum);
  printf("%f\n", sum*1.0/n);
}

