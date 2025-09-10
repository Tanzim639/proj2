#include<stdio.h>

struct Date{;
    int d;
    int m;
    int y;
};

int main(){
    struct Date date1,date2;
    printf("Print the d/m/y for the first date:\n");
    scanf("%d%d%d", &date1.d, &date1.m, &date1.y);
    printf("Print the d/m/y for the second date:\n");
    scanf("%d%d%d", &date2.d, &date2.m, &date2.y);
    int diff = ( (date1.y)*365 + (date1.m)*30 + date1.d ) - ( (date2.y)*365 + (date2.m)*30 + date2.d );
    (diff<0)?(printf("Difference of days are %d", -diff)):(printf("%d", diff));
}


