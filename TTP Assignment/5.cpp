#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Question: find the equation of a plane through the point (a,b,c) and parallel to the plane whose direction numbers are (d,e,f)"<<endl;
    double a,b,c,d,e,f,constant;
    cout<<"The value of a: "; cin>>a;
    cout<<"The value of b: "; cin>>b;
    cout<<"The value of c: "; cin>>c;
    cout<<"The value of d: "; cin>>d;
    cout<<"The value of e: "; cin>>e;
    cout<<"The value of f: "; cin>>f;
    constant=-(a*d)-(b*e)-(c*f); 
    cout<<"The equation is:"<<endl;
    cout<<d<<"x";
    if(e>0){
        cout<<"+"<<e<<"y";
    }else{
        cout<<e<<"y";
    }
    if(f>0){
        cout<<"+"<<f<<"z";
    }else{
        cout<<f<<"z";
    }
    if(constant>0){
        cout<<"+"<<constant;
    }else{
        cout<<constant;
    }
    cout<<"=0"<<endl;
}
