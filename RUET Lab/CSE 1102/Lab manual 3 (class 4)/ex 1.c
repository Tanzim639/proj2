#include <stdio.h>
int main()
{
    int a, b, c;  char d;
    while(1)
    {

    printf("Give two numbers: ");
    scanf("%d%d", &a, &b);
    c=a+b;
    printf("Sum is %d\n", c);

    scanf("%*c %c", &d);
    if((d=='y') || (d=='Y')){continue;}
    else
       {break;}

    }


    return 0;
}
