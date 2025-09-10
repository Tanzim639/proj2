#include<stdio.h>

float AP(int X, int N){
    float ans=1.0;  int N1;
    if(N<0){ N1=-N; }
     if(N>=0){
        for(int i=0; i<N; i++){
            ans*=X;
        }
        return ans;
     }
     else{
        for(int i=0; i<N1; i++){
            ans*=X;
        }
        return (1/ans);
     }
}

void main(){
    int a,b;  scanf("%d%d", &a,&b);
    printf("%f", AP(a,b));

}

