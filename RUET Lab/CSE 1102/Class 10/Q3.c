#include<stdio.h>
void main(){
    char a[100];  scanf("%s", a);
    int cnt=0, ans=0;
    while(a[cnt]!='\0'){
        if(a[cnt]=='a'||a[cnt]=='e'||a[cnt]=='i'||a[cnt]=='o'||a[cnt]=='u'||a[cnt]=='A'||a[cnt]=='E'||a[cnt]=='I'||a[cnt]=='O'||a[cnt]=='U')ans++;
        cnt++;
    }
    printf("%d", ans);
}

