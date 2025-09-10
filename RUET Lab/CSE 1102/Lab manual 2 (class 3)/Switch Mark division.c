#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("What is your mark? ");
    scanf("%d", &mark);
    switch(mark)
    {
        case 60 ... 100: printf("\nFirst Division\n"); break;
        case 45 ... 59: printf("\nSecond Division\n");  break;
        case 33 ... 44: printf("\nThird Division\n");  break;
        case 0 ... 32: printf("\nFail\n");  break;
        default: printf("\nInvalid\n");  break;
    }
    return 0;
}

