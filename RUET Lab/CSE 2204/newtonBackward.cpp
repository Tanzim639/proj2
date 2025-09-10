

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void f(vector<double>& y) {
  for (int i = 0; i <y.size()-1; i++) {  // Update the vector from the back to avoid overwriting
    y[i]=( y[i+1] - y[i]);
  }
  y.pop_back();
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


  vector<double> ans;
  ans.push_back(y[n-1]);

  for (int i = 1; i < n; i++) {
    f(y);
    ans.push_back(y[y.size()-1]);
  }

  double in;
  cin >> in;
  double p = (x[n-1]-in) / (x[0] - x[1]);
//  for (auto s : ans) {
//    cout << s << endl;
//  }
  vector<double>pp(ans.size(),0);
  pp[1]=p;
  for(int i=2;i<pp.size();i++){
    pp[i]=pp[i-1]*(p+i-1);
  }
  double sum=0.0;
  for(int i=1;i<ans.size();i++){
    sum+=(pp[i]*ans[i])/facto(i);
  }
  for(auto s: pp){
    cout<<s<<endl;
  }
  cout<<sum+ans[0]<<endl;
  return 0;
}





