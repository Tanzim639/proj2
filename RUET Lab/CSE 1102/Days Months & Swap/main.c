#include <stdio.h>

int main()
{

   int days, months, days2;
   printf("Give total days: ");
   scanf("%d", &days);
   months=days/30;
   days2=days%30;
   printf("Before swap: Months:%d    Days:%d\n", months,days2);

   //swapping the values of Months and Days variable
   months=months+days2;
   days2=months-days2;
   months=months-days2;
   printf("After swap:  Months:%d    Days:%d\n", months,days2);

   return 0;

}
