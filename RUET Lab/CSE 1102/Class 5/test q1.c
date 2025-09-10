#include <stdio.h>
void main()
{
    int n; scanf("%d", &n);   int sum=0, mod;
    while(1)
    {

        mod=n%10;
         n=n/10;
         if(n==0)break;
         if(mod==2 || mod==3 || mod==5 || mod==7 ) { sum=sum+mod; }

    }
    printf("%d", sum);

}
