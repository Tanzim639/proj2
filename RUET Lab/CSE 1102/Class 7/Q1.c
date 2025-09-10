#include<stdio.h>

void merge(int a, int b, int A[a], int B[b], int C[a+b])
{
    int i=0, j=0, k=0;
    while(i<a && j<b)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];  i++;  k++;
        }
        else
        {
            C[k]=B[j];  j++;  k++;
        }

    }
    while(i<a)
    {
        C[k]=A[i];  i++; k++;
    }
    while(j<b)
    {
        C[k]=B[j];  j++; k++;
    }

}

int main()
{
    int n1, n2;   scanf("%d%d", &n1,&n2);
    int arr1[n1], arr2[n2], arr3[n1+n2];
    for(int i=0; i<n1; i++) { scanf("%d", &arr1[i]); }
    for(int i=0; i<n2; i++) { scanf("%d", &arr2[i]); }
    merge( n1, n2, arr1[n1], arr2[n2], arr3[n1+n2]);
    for(int i=0; i<n1+n2; i++)
    {
        printf("%d  ", arr3[i]);
    }
}
