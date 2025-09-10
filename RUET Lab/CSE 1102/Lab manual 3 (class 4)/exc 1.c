#include <stdio.h>
void main()
{
    printf("Type the number you wanna know the factorial of: ");
    int num; scanf("%d", &num);
    int ans=1;
    for(int i=1; i<=num; i++)
    {
        ans=ans*i;
    }
    printf("Ans is %d", ans);

}
