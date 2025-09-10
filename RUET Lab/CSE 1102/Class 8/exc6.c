#include<stdio.h>

int max(int number1, int number2){
if(number1>number2)
return number1;
else
return number2;
}

void main(){
   int a,b,c,d;   scanf("%d%d%d%d",&a,&b,&c,&d);
   printf("%d", max(max(a,b),max(c,d)));

}

