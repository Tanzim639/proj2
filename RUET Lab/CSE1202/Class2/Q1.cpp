//2.2
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long A,B,C; cin>>A>>B>>C;
    long long D=(B*B*1LL)-(4*A*C*1LL);
    if(D>0){
        double X1,X2;
        X1 = (-B+sqrt(D))/(2*A);
        X2 = (-B-sqrt(D))/(2*A);
        cout<<"X1 is "<<X1<<" X2 is "<<X2<<endl;
    }else if(D==0){
        double X = -B/(2*A);
        cout<<"Unique Solution x is "<<X<<endl;
    }else{
        cout<<"No real solution"<<endl;
    }

}