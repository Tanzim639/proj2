

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

double val(double x){
    return x*x*x-2*x-5;
}

void chk(vector<double>&v){
     double x=val(1);
     double y;
     if(x<0){
     for(int i=2;i<30;i++){
        if(val(i)>0){y=val(i);break;}
      }
    }
    else {
        for(int i=2;i<30;i++){
        if(val(i)<0){y=val(i);break;}
      }
    }
    v.push_back(x);
    v.push_back(y);
}
int main(){
    vector<double>v;
    chk(v);

    double a=2.0,b=3.0;
    double m=(a*val(b)-b*val(a))/(val(b)-val(a));
    double res=val(m);
                        cout<<"Iteration                   a                    b                m                  f(m)"<<endl;
    cout<<"_____________________________________________________________________________________________________________"<<endl;
    cout<<fixed<<setprecision(5)<<1<<"                     "<<2<<"                    "<<3<<"                 "<<m<<"           "<<res<<endl;
    int i=2;
    double e;
    int tt=1000;
    while(tt--){
       double st=m;
        if (val(a) * res < 0) {
            b = m;
        } else {
            a = m;
        }
       m=(a*val(b)-b*val(a))/(val(b)-val(a));
       res=val(m);
    cout<<fixed<<setprecision(5)<<i<<"                     "<<a<<"              "<<b<<"           "<<m<<"           "<<res<<endl;
       i++;
       e=abs(m-st);
       if(e<0.0001)break;
    }
}
