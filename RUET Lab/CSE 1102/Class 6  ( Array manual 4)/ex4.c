
#include <stdio.h>
void main()
{
 int N;  scanf("%d", &N);
 int arr[N], arrE[N], arrO[N];    int m;   int e=0, o=0;
 for(int i=0; i<N; i++)
 {
     scanf("%d", &m);
     arr[i]=m;
     if(m%2){ arrO[o]=m; o++; }
     else  { arrE[e]=m; e++; }

 }
 for(int i; i<N; i++ )
 {
     printf("%d   ", arr[i]);
 }
 printf("\n\n");
 for(int i=0; i<e; i++)
 {
     printf("%d   ", arrE[i]);
 }
  printf("\n");
 for(int i=0; i<o; i++)
 {
     printf("%d   ", arrO[i]);
 }
}




