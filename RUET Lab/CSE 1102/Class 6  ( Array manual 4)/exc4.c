#include <stdio.h>
void main()
{
   int N;   scanf("%d", &N);   int m;  int o=0;
   int arr[N];   int odd[N];
   for(int i=0; i<N; i++)
   {
       scanf("%d", &m);
       arr[i]=m;
       if(m%2==1) { odd[o]=m; o++; }
   }

   for(int i=0; i<o; i++)
   {
       printf("%d   ", odd[i]);
   }
}




