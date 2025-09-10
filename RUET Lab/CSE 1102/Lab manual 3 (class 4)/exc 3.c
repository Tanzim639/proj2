#include <stdio.h>
void main()
{
    int x1, x2, ans=0;
    printf("Give the lower and upper limit: ");
    scanf("%d%d", &x1, &x2);
    for(int i=x1; i<=x2; i++)
    {
        if(i%3==0){ans+=i;}
    }
    printf("Ans is %d", ans);

}
