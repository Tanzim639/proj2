#include <stdio.h>

int prime(int n){
    int num=2;   int count=0; int bulb;

  while(1){
    int bulb=0;
    for(int i=2; i<=num/2; i++){       //num is 2,3,4,5....  check every num if prime, if prime, count++..... if count==input,, break
        if(num%i==0){
            bulb=1;
            break;
        }
    }
    if(bulb==0){
        count++;
    }
    if(count==n){
        return num;
    }
    num++;
  }

}

 int ncr(long long int n, long long int r){
     long long int f1=1, f2=1, f3=1;;   long long int n1=n-r;
     for(int i=2; i<=n; i++){
        f1*=i;
     }
     for(int i=2; i<=n1; i++){
        f2*=i;
     }
     for(int i=2; i<=r; i++){
        f3*=i;
     }
     return f1/(f2*f3);

}




int main(){
//    printf("%d\n", prime(9));
    //printf("%d\n", ncr(13,11));
  int n;  scanf("%d", &n);  long long int sum=0;
  for(int j=1; j<=n; j++){
      //printf("%d\n", prime(j));
    int a=prime(j); int b=prime(j+1);
    //printf("%lld\n", sum);
    sum+=ncr(b,a);
  }
  printf("%d",sum);

  return 0;
}

