#include <stdio.h>
void main()
{
    int l; scanf("%d", &l);
    for(int i=0; i<l; i++)
    {
        for(int j=l-i; j>0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
