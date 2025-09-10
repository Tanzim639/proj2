#include<stdio.h>
#include<math.h>

int f(int x, int y){
    int ans=1;
   for(int i=0; i<y; i++){
            ans*=x;
        }
        return ans;
}

void main(){
    int a,b;   scanf("%d%d",&a,&b);
    printf("%d", f(a,b));
}

