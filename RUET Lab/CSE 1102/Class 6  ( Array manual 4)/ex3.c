#include <stdio.h>
#include<limits.h>
void main()
{
   int N;  scanf("%d", &N);   int m;
   int arr[N];   int min = INT_MAX;
   for(int i=0; i<N; i++)
   {
       scanf("%d", &m);
       if(m<min) { min=m; }
   }
   printf("%d\n", min);

}



