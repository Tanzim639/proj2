#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b;

 scanf("%d", &a);

 scanf("%d", &b);
 char ch;
 scanf("%*c%c", &ch);
 switch(ch)
 {
     case '+': printf("\n%d", a+b); break;
     case '-': printf("\n%d", a-b); break;
     case '*': printf("\n%d", a*b); break;
     case '/': printf("\n%d", a/b); break;
     default: printf("\nNot possible");
 }


    return 0;
}



