#include<stdio.h>

void AP(int b, int h){
     printf("Area is %d\n", b*h);
     printf("Perimeter is %d", 2*(b+h));
}

void main(){
    int b,h;    scanf("%d%d",&b,&h);
    AP(b,h);
}
