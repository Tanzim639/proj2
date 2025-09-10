//doing a^b in optimal way
//a^b % M = (a%M)^b % M


#include<bits/stdc++.h> 
using namespace std;
const int M = 1e9+7;

 //binary exponentiation by recursion
int binExpRecur(int a, int b){
  if(b==0) return 1;
  long res = binExpRecur(a, b/2);
  if(b&1){
    return a*res*res;
  }else{
    return res*res;
  }
}

int binExpRecurM(int a, int b){
  if(b==0) return 1;
  int res = binExpRecurM(a, b/2);
  if(b&1){
    return (a * ((res*1LL*res)%M) % M );
  }else{
    return (res*1LL*res)%M;
  }
}

///binary exponentiation by iterarion
int binExpIter(int a, int b){
  int ans=1;
  while(b){
    if(b&1){
      ans=ans*a;
    }
    a=a*a;
    b>>=1;
  }
  return ans;
}

int main(){
  int a=2, b=13;
  cout<<binExpRecur(a,b)<<endl;
  cout<<binExpIter(a,b)<<endl;
 
}
//x&1 == 1 means x is odd 
//(3^13)=3^(1101 in binary)=3^(8+0+2+1)=....