
#include <stdio.h>
void main()
{
  int i, j, r, c;
  printf("How many rows: ");  scanf("%d", &r);
  printf("How many collums: ");  scanf("%d", &c);
  int arr[r][c];
  for(int i=0; i<r; i++)
  {
      for(int j=0; j<c; j++)
      {
          printf("A[%d][%d] = ",i,j );
          scanf("%d", &arr[i][j]);
      }
  }
  printf("Matrix:\n");
  for(int i=0; i<r; i++)
  {
      for(int j=0; j<c; j++)
      {
          printf("%d   ",arr[i][j]);
      }
      printf("\n");
  }


}




