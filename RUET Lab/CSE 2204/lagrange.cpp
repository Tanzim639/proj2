
#include<bits/stdc++.h>
using namespace std;
#define ll long long

double xpro(vector<double>&x,double val){
   double sum=1.0;
   for(int i=0;i<x.size();i++){
     if(x[i]==val)continue;
     sum*=(val-x[i]);
   }
   return sum;
}

double xproup(vector<double>&x,double val,double bye){
   double sum=1.0;
   for(int i=0;i<x.size();i++){
     if(x[i]==bye)continue;
     sum*=(val-x[i]);
   }
   return sum;
}

int main() {
  ll n;
  cin >> n;
  vector<double> x(n), y(n);


  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < n; i++) {
    cin>>y[i];
  }
  ll in;cin>>in;
  double ans=0.0;
  for(int i=0;i<n;i++){
     ans+=((y[i]*xproup(x,in,x[i]))/(xpro(x,x[i])));

  }
  cout<<ans<<endl;

  return 0;
}




