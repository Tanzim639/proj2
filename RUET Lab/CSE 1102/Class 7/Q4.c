#include<stdio.h>
void main()
{
    int n;  scanf("%d", &n);  int arr[n];
    for(int i=0; i<n; i++) { scanf("%d", &arr[i]); }
for(int a=0; a<1000; a++){
    for(int i=0, j=1; i<=n-2, j<=n-1; i++, j++)
    {
        if(arr[i]>arr[j]) { int temp; temp=arr[i]; arr[i]=arr[j]; arr[j]=temp; }
    }
}
    for(int i=0; i<n; i++)
  {
      printf("%d  ", arr[i]);
  }
}
