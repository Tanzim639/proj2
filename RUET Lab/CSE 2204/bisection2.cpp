#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return (x*x*x)-(2*x)-5;
}

int main(){
    double a,b,error;
    cout<<"The function is f(x) = x^3 - 2x - 5 = 0"<<endl;
    cout<<"Write a,b and tolerence: ";
    cin>>a>>b>>error;
    int steps=0;
    cout<<"Steps  a  b  m  f(m)"<<endl;
    while(((b-a)/2)>error){
        steps++;
        double mid = (a+b)/2;
        cout<<fixed<<setprecision(6)<<int(steps)<<" "<<a<<"  "<<b<<"  "<<mid<<"  "<<func(mid)<<endl;
        if(func(mid)==0){
            cout<<fixed<<setprecision(6)<<"Exact root found at "<<mid<<endl;
            return 0;
        }
        if((func(a)*func(mid))<0){
            b=mid;
        }else{
            a=mid;
        }
    }
    cout<<fixed<<setprecision(6)<<"The approximate root is "<<(a+b)/2<<endl;
}