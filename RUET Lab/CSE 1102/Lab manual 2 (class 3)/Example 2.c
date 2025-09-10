#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,d;
  scanf("%d%d%d%d", &a,&b,&c,&d);
  if(a>b && a>c && a>d)
    printf("Maximum is %d", a);
     else if(b>a && b>c && b>d)
    printf("Maximum is %d", b);
     else if( c>a && c>b && c>d)
    printf("Maximum is %d", c);
      else if( d>a && d>b && d>c)
    printf("Maximum is %d", d);


    return 0;
}


