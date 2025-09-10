#include<bits/stdc++.h> 
using namespace std; 
class complx{ 
  double a; 
  double b; 
  public: 
      complx(){ 
       a=0;b=0; 
      } 
      complx(double x,double y){ 
         a=x; 
         b=y; 
      } 
      void display(complx &obj){ 
        cout<<"The complex number is "<<obj.a<<" + "<<" i"<<obj.b<<endl; 
      } 
      void display2(complx &obj){ 
        cout<<"The complex number is "<<obj.a<<" - "<<" i"<<obj.b<<endl; 
      } 
      complx operator+(complx &obj){ 
         complx temp(a,b); 
         temp.a=temp.a+obj.a; 
         temp.b=temp.b+obj.b; 
         return temp; 
      } 
      complx operator/(complx &obj){ 
         complx temp(a,b); 
         temp.a=(temp.a*obj.a+temp.b*obj.b)/(obj.a*obj.a-obj.b*obj.b); 
         temp.b=((temp.b*obj.a)-(temp.a*obj.b))/(obj.a*obj.a-obj.b*obj.b); 
         return temp; 
      } 
}; 
int main(){ 
     complx jkt1(10.00,4.00); 
     complx jkt2(8.00,7.00); 
     complx jkt3(8.00,9.00); 
     complx v(100.00,100.00); 
     complx jktr=jkt1+jkt2+jkt3; 
     jkt1.display(jktr); 
     complx i=v/jktr; 
     jkt1.display2(i); 
}