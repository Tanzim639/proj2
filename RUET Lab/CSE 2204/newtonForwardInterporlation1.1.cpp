#include<bits/stdc++.h>
using namespace std;
#define ll long long

void f(vector<double>& y) {
  for (int i = 0; i <y.size()-1; i++) {  // Update the vector from the back to avoid overwriting
    y[i]=( y[i+1] - y[i]);
  }
  y.pop_back();
}

int main() {
  ll n;
  cin >> n;
  vector<double> x(n), y;
  double input;
  cin >> input;

  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < n; i++) {
     double q;cin>>q;
     y.push_back(q);
  }

  double p = (input - x[0]) / (x[1] - x[0]);
  vector<double> ans;
  ans.push_back(y[0]);
//  cout<<ans[0]<<endl;
//
//  for (int i = 1; i < n; i++) {
//    //f(y);  // Call the function for the difference
//    ans.push_back(y[0]);
//  }

  for (auto s : y) {
    cout << s << endl;
  }

  return 0;
}



//4
//1 3 5 7
//24 120 336 720
//8
