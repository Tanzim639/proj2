#include <stdio.h>
void main()
{
 int N;  scanf("%d", &N);  int sum=0;
 int arr[N];
 for(int i=0; i<N; i++)
 {
     scanf("%d", &arr[i]);
     sum+=arr[i];
 }
 printf("%f\n", (float)sum/N);


}



