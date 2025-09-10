#include <stdio.h>
void main()
{
    int l, s;
    printf("Type the numbers of line:\n");
    scanf("%d", &l);
    for(int i=1; i<=l; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
