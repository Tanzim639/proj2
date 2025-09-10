#include <stdio.h>
#include<limits.h>
void main()
{
   int N;  scanf("%d", &N);   int m;
   int arr[N];   int max = INT_MIN; //int max = INT_MIN-1;
   for(int i=0; i<N; i++)
   {
       scanf("%d", &m);
       if(m>max) { max=m; }

   }
   printf("%d       \n", max);
//   for(int i=0; i<N; i++)
//   {
//       int t;
//       a
//   }


}


