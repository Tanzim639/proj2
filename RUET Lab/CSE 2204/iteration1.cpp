#include<bits/stdc++.h>
using namespace std;
#define ll long long

double func(double x){
    return ( 1.0/(sqrt(x+1.0)) );
}

int main(){
    double Xo,error;
    cout<<"The function is g(x) = x = 1/(root(x+1))"<<endl;
    cout<<"Write Xo and tolerence: ";
    cin>>Xo>>error;
    double prevX = Xo, newX;
    int steps=0;
    cout<<"Steps  Xn  g(Xn)  |X(n+1) - Xn|"<<endl;
    while(1){
        steps++;
        newX = func(prevX);
        cout<<fixed<<setprecision(6)<<int(steps)<<"  "<<prevX<<"  "<<newX<<"  "<<abs(newX-prevX)<<endl;
        if (abs(newX-prevX)<error){
            break;
        }else{
            prevX=newX;
        }
    }    
    cout<<fixed<<setprecision(6)<<"The approximate root is "<<newX<<endl;
}