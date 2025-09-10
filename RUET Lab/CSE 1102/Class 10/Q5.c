#include<stdio.h>
void main(){
    char a[100]; scanf("%s", a);
    char b; scanf(" %c", &b);
    char c[100];
    char n; scanf(" %c", &n);
    int cnt=0, cnt2=0;
    while(a[cnt]!='\0'){
        if(a[cnt]==b){cnt++; c[cnt2++]=n; continue;}
        c[cnt2]=a[cnt];
        cnt2++; cnt++;
    }
    printf("%s", c);
}
