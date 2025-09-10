#include<stdio.h>
void main(){
   char a[100]; char b[100];  scanf("%s", a); scanf("%s", b);
   char c[200];
   int cnt1=0, cnt2=0, cnt3=0;
   while(a[cnt1]!='\0'){
      c[cnt1]=a[cnt1];
      cnt1++;
   }
   while(b[cnt2]!='\0'){
      c[cnt1]=b[cnt2];
      cnt2++; cnt1++;
   }
   printf("%s", c);

}

