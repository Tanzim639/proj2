#include <stdio.h>
void main()
{
    int n; scanf("%d", &n);

    switch(n)
    {
        case 0 ... 9999: printf("%f", 0.1*n); break;
        case 10000 ... 29999: printf("%f", (1000+(0.15*(n-10000)))); break;
        case 30000 ... 49999: printf("%f", (4500+(0.2*(n-30000)))); break;
        default: printf("%f", (10000+(0.25*(n-30000)))); break;
    }

}

