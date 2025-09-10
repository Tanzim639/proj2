#include <stdio.h>
void main ()
{
    int n; scanf("%d", &n); int j;
    for(int i=1; i<=n; i++)
    {

        for(j=n-i+1; j>0; j--)
        {
            printf("%d", n-j-i+2);

        }
            printf("\n");
    }

}
