
#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define YES cout<<"YES"<<endl
#define Yes cout<<"Yes"<<endl
#define NO  cout<<"NO" <<endl
#define No  cout<<"No" <<endl
#define nn  "\n"
#define ll  long long
#define lli long long int
const unsigned int MOD = 1000000007;

double Val(double x){
    return pow(x,2.2)-69;
}

void chk(vector<double>&v){
     double x=Val(1);
     double y;
     if(x<0){
     for(int i=2;i<30;i++){
        if(Val(i)>0){y=Val(i);break;}
      }
    }
    else {
        for(int i=2;i<30;i++){
        if(Val(i)<0){y=Val(i);break;}
      }
    }
    v.push_back(x);
    v.push_back(y);
}
int main(){
    vector<double>v;
    chk(v);
    double a=5.0,b=8.0;
    double  m=(a*Val(b)-b*Val(a))/(Val(b)-Val(a));

    double res=Val(m);
    cout<<"Iteration                a                   b                   m                f(m)"<<endl;
    cout<<"________________________________________________________"<<endl;
    cout<<1<<"                     "<<5<<"              "<<8<<"          "<<m<<"            "<<res<<endl;
    int i=2;
    double e;
    int tt=1000;
    while(tt--){
       double st=m;
       e=abs(a-m);
        if (Val(a) * res < 0) {
            b = m;
        } else {
            a = m;
        }
       m=(a*Val(b)-b*Val(a))/(Val(b)-Val(a));
       res=Val(m);
    cout<<i<<"                     "<<a<<"              "<<b<<"           "<<m<<"           "<<res<<endl;
       i++;
       if(e<0.0001)break;
    }
}
