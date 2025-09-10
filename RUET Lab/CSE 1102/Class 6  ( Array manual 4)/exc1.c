#include <stdio.h>
void main()
{
 printf("Enter the number of elements: ");
 int n;  scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 int m;
 for(int i=0; i<n; i++)
 {
     scanf("%d", &m);
     arr[i]=m;
 }


 for(int i=n-1; i>=0; i--)
 {
    printf("Element [%d] = %d\n", i,arr[i]);
 }


}


