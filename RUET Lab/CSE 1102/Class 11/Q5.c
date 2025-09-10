#include <stdio.h>
void isP(int *a){

  for(int i=2; i<=(*a)/2; i++){

    if((*a)%i==0){
        printf("Not Prime\n");
        return;
    }

  }
  printf("Prime\n");
}
void main(){
  int a;  scanf("%d", &a);  int *p=&a;
  isP(p);

}


