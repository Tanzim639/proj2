#include<bits/stdc++.h>
using namespace std;
float func(float x)
{ 
    float f=x*exp(x)-1;
    return f;
}
int main()
{
    float m;
    float a,b,e;
    cout<<"Enter the values of a,b and e:\n";
    cin>>a>>b>>e;

   if(func(a)*func(b)>=0)
    cout<<"Invalid initial guesses"<<endl;
   float i=0;
   while(((b-a)/2)>e)
   {
    i++;
     m=(a+b)/2;
    cout<<"The value of \n current iteration:"<<i<<"\n a: "<<a<<"\n b: "<<b<<"\n m: "<<m<<endl;
    cout<<"The value of f(m) :"<< func(m)<<endl;
    if(func(m)==0)
    {
        cout<<"Exact root found at :"<<m<<endl;
        break;
    }
    if(func(a)*func(m)<0)
    b=m;
    else
    a=m;
   }
   m=(a+b)/2;
   cout<<"The approximate root is :"<<m<<endl;
   return 0;
}