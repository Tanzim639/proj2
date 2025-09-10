// 1<<4 --> 10000
// 1<<n --> (2^n)
// 10000-1 = 1111
// max num by n bits is (2^n)-1
// ~(10010) --> 01101  TILDA Operator
// n>>1 --> n/2
// n<<1 --> n*2
// for UpperCase -> 'A' 1000001  (5th bit is unset)
// for LowerCase -> 'a' 1100001  (5th bit is set)

#include <bits/stdc++.h>
using namespace std;

void decicamlToBinary(int num){
    for(int i=10; i>=0; i--){
        cout<< ((num>>i) & 1);  //here num>>i transfers the i-th to 0-th position 
    }
    cout<<endl;
}

void setOrUnset(int num, int i){
    //checking if i-th bit set or unset
    if((num & (1<<i)) != 0)cout<<"Set Bit"<<endl;
    else cout<<"Unset Bit"<<endl;
}

void countSetBits(int num){
   int ct=0;
   for(int i=31; i>=0; i--){
    if((num & (1<<i)) != 0)ct++;
   }
   cout<<ct<<endl;
}

void oddOrEven(int num){
    if(num&1)cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;
}

int main(){
  decicamlToBinary(10);
  setOrUnset(10,2);  //checking if 2-th bit set or unset

  //set a unset bit (2nd bit)
  decicamlToBinary(10 | (1<<2));  // (1010 | 100) --> 1110

  //unset a set bit (1st bit)
  decicamlToBinary(10 & ~(1<<1)); // (1010 & 1101) --> 1000

  //toggle a bit (3rd bit)  //1->0  0->1
  decicamlToBinary(10 ^ (1<<3));

  countSetBits(10);
  cout<<__builtin_popcount(10)<<endl; //inbuilt func for setBit count //works for int
  cout<<__builtin_popcountll((1LL<<35)-1)<<endl;//for long long

  for(int i=0; i<=5; i++){
    oddOrEven(i);
  }
  
  // case conversion
  char c1='T', c2='f';
  cout<< char(c1 | (1<<5)) <<endl;
  cout<< char(c2 & (~(1<<5))) <<endl;
  cout<< char('D' | ' ') <<endl;  // 1<<5 char is space
  cout<< char('h' & '_') <<endl;
  cout<< char('G'^32) <<endl;
  cout<< char('a'^32) <<endl;

  //clear LSB from j-th bit
  int a1=59;
  decicamlToBinary(59);
  int j1=3;
  decicamlToBinary(a1 & (~((1<<(j1+1))-1)));

  //clear MSB till j-th bit
  int a2=59;
  decicamlToBinary(59);
  int j2=3;
  decicamlToBinary(a2 & ((1<<(j2+1))-1));

  //checking if a number is power of 2 or not
  int pot=16;
  if(pot & (pot-1))cout<<"Not power of 2"<<endl;
  else cout<<"Power of two"<<endl;
}
