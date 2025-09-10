#include <stdio.h>>
void main()
{
    int noOfInt, count, sum=0, value;
    printf("How many numbers you wanna add?\n");
    scanf(" %d", &noOfInt);
    printf("Type the integers\n");

    for(count=1; count<=noOfInt; count++)
    {
        scanf("%d", &value);
        sum=sum+value;
    }
    printf("Sum is %d", sum);
}
