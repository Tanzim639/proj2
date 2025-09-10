#include<bits/stdc++.h>
using namespace std;
void katakati(int &a,int &b,int &c,int &d){
    int gcd;
    gcd=__gcd(a,b); gcd=__gcd(gcd,c); gcd=__gcd(gcd,d);
    a/=gcd; b/=gcd; c/=gcd; d/=gcd; 
}
int main(){
    cout<<"Find the equation of a plane passing through the intersection of the planes a1x+b1y+c1z+d1=0 and a2x+b2y+c2z+d2=0 and the point l,m,n: "<<endl;
    int a1,b1,c1,d1,a2,b2,c2,d2,l,m,n;
    cout<<"The value of a1: "; cin>>a1;
    cout<<"The value of b1: "; cin>>b1;
    cout<<"The value of c1: "; cin>>c1;
    cout<<"The value of d1: "; cin>>d1;
    cout<<"The value of a2: "; cin>>a2;
    cout<<"The value of b2: "; cin>>b2; 
    cout<<"The value of c2: "; cin>>c2;
    cout<<"The value of d2: "; cin>>d2;
    cout<<"The value of l: "; cin>>l;
    cout<<"The value of m: "; cin>>m;
    cout<<"The value of n: "; cin>>n;
    int var1 = a1*l + b1*m + c1*n + d1; var1*=-1;
    int var2 = a2*l + b2*m + c2*n + d2;
    int gcd=__gcd(var1,var2);
    var1=var1/gcd; var2=var2/gcd; //k=-var1/var2
    int a,b,c,d;
    a=(a1*var2)+(a2*var1);
    b=(b1*var2)+(b2*var1);
    c=(c1*var2)+(c2*var1);
    d=(d1*var2)+(d2*var1);
    katakati(a,b,c,d);
    cout<<"The equation is:"<<endl;
    cout<<a<<"x";
    if(b>0){
        cout<<"+"<<b<<"y";
    }else{
        cout<<b<<"y";
    }
    if(c>0){
        cout<<"+"<<c<<"z";
    }else{
        cout<<c<<"z";
    }
    if(d>0){
        cout<<"+"<<d;
    }else{
        cout<<d;
    }
    cout<<"=0"<<endl;
    
}

// find the eq of a plane passing through the intersection of the planes x+2y+3z+4=0 and 4x+3y+2z+1=0 and the point 1,2,3 
// 1
// 2
// 3
// 4
// 4
// 3
// 2
// 1
// 1
// 2
// 3