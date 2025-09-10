#include<bits/stdc++.h>
using namespace std;
#define ll long long

double func(double x){
    return (pow(x,2.2) - 69);
}

int main(){
    double a,b,error;
    cout<<"The function is f(x) = 2^2.2 - 69 = 0"<<endl;
    cout<<"Write a,b and tolerence: ";
    cin>>a>>b>>error;
    int steps=0;
    cout<<"Steps  a  b  m  f(m)"<<endl;
    double c=0;
    while(abs(func(c))>=error){
        steps++;
        c = ((a*func(b)) - (b*func(a)))/(func(b)-func(a));
        cout<<fixed<<setprecision(6)<<steps<<"  "<<" "<<a<<"  "<<b<<"  "<<c<<"  "<<func(c)<<endl;
        if(abs(func(c))==0){
            cout<<fixed<<setprecision(6)<<"Root found at "<<c<<endl;
            return 0;
        }
        if((func(a)*func(c))<0){
            b=c;
        }else{
            a=c;
        }
    }
    cout<<fixed<<setprecision(6)<<"The approximate root is "<<c<<endl;
}