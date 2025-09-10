
#include <stdio.h>
void main()
{
   printf("Enter the number of elements: ");
   int N; scanf("%d", &N);   int m;
   int arr[N];
   printf("Enter %d elements:\n", N);
   for(int i=0; i<N; i++)
   {
       scanf("%d", &m);
       arr[i]=m;
   }
   int S;  printf("Elements going to be searched = ");  scanf("%d", &S);
   for(int i=0; i<=N; i++)
   {
      if(i==N) { printf("%d is not found", S); break; }
        else if(arr[i]==S) { printf("%d is found at position: %d", S, i+1);  break; }

   }

}




