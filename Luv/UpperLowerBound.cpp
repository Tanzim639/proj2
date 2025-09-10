/*
u.b l.b returns location
4 5 5 7 8 25
u.b. of 5 is 7.. of 8 is 25.. of 6 is 7
l.b of 5 is 5.. of 8 is 8.. of 6 is 7
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    //FOR SET
  int n;  //cin>>n;
  set<int>s={4,5,7,9,22};
  // for(int i=0; i<n; i++){
  //   int x; cin>>x;
  //   s.insert(x);
  // }
  for(auto it=s.begin(); it!=s.end(); it++){
    cout<<*it<<" ";
  }
  cout<<endl;
  auto it =s.lower_bound(23);   //log(n);
  if(it==s.end()){ cout<<"not found"; return 0; }
  cout<<*it<<endl;
  //for map.. lb ub is used KEY, and so it returns the iterator of VALUE
}


/*
FOR ARARY:
  int n;  cin>>n;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  sort(a, a+n);  //using u.b, l.b in sorting array reduces t.c  
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  int *ptr = lower_bound(a,a+n,25);   //log(n);
  cout<<*ptr<<endl;
*/

/*
FOR VECTOR:
  int n;  cin>>n;
  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  sort(a.begin(), a.end());  //using u.b, l.b in sorting array reduces t.c  
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  auto it = upper_bound(a.begin(),a.end(),5);   //log(n);
  if(it==a.end()){ cout<<"not found"; return 0; }
  cout<<*it<<endl;
*/