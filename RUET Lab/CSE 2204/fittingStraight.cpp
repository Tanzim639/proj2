
#include<bits/stdc++.h>
using namespace std;
#define ll long long

double sum(vector<double>& v) {
    double addup=0.0;
  for (int i = 0; i <v.size(); i++) {
      addup+=v[i];
  }
   return addup;
}

ll facto(ll n){
  if(n==1)return n;
   return facto(n-1)*n;
}

int main() {
  ll n;
  cin >> n;
  vector<double> x(n), y;


  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < n; i++) {
     double q;cin>>q;
     y.push_back(q);
  }
  vector<double>xy(n,0);
  for(int i=0;i<n;i++){
    xy[i]=x[i]*y[i];
  }
  vector<double>x2(n,0);
  for(int i=0;i<n;i++){
    x2[i]=x[i]*x[i];
  }
  cout<<sum(x)<<" "<<sum(y)<<" "<<sum(x2)<<" "<<sum(xy)<<endl;
  double a0=(sum(x)*(-1)*sum(xy)-(sum(x2)*(-1)*sum(y)))/(n*sum(x2)-sum(x)*sum(x));
  cout<<"a0 "<<a0<<endl;

  double a1=(-n*(-1)*sum(xy)+(sum(x)*(-1)*sum(y)))/(n*sum(x2)-sum(x)*sum(x));
  cout<<"a1 "<<a1<<endl;

  return 0;
}





