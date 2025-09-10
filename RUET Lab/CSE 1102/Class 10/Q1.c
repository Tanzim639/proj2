#include<stdio.h>
void main(){
    char word[100];  scanf("%s", word);  int cnt=0;
    while(word[cnt]!='\0'){
        cnt++;
    }
    printf("%d", cnt);
}
