



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
    return 1/(sqrt(x+1));
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

    double a=0.5;
    //double m=(a*val(b)-b*val(a))/(val(b)-val(a));
    double res=val(a);
                        cout<<"Iteration                   a                                    g(x)                  "<<endl;
    cout<<"_____________________________________________________________________________________________________________"<<endl;
    cout<<fixed<<setprecision(6)<<1<<"                     "<<5<<"                                     "<<res<<"           "<<endl;
    int i=2;
    double e;
    int tt=1000;
    while(tt--){
       double st=res;
       a=res;
       res=val(a);
    cout<<fixed<<setprecision(6)<<i<<"                     "<<a<<"                         "<<res<<"           "<<endl;
       i++;
       e=abs(res-st);
       if(e<0.0001)break;
    }
}
