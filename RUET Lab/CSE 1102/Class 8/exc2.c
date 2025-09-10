#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int difference(int a, int b){
    return abs(a-b);
}

void main(){
    int a,b;  scanf("%d%d", &a,&b);
    printf("%d", difference(a,b));
}

