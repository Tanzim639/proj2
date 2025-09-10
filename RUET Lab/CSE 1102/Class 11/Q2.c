#include <stdio.h>
void main(){
  int n;  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  int *ptr=arr;  int *ptr2=arr;
  int max=*ptr;   int min=*ptr2;
  for(int i=1; i<=n; i++){
    if(*(ptr+4)>max)max=(*(ptr+4));
    ptr++;
    if(*(ptr2+4)<min)min=*(ptr2+4);
    ptr2++;
  }
  printf("%d\n", max);
  printf("%d", min);
}

