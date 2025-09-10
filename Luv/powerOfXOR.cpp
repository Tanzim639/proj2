// n^n=0;  n^0=n;
// x^y^z = x^z^y = y^x^z

#include <bits/stdc++.h>
using namespace std;

int main(){
  //in given array all int are present in even count except one.. find that in O(N)tc and O(1)space
  int n; cin>>n;
  int x, ans=0;
  for(int i=0; i<n; i++){
    cin>>x;
    ans^=x;
  }
  cout<<ans<<endl;
}

/*
  //swapping variables
  int a=4, b=6;
  a=a^b;
  b=b^a; //b = b^(a^b) = b^b^a = a
  a=a^b; //a = (a^b)^a = a^a^b = b
  cout<<a<<" "<<b<<endl;
  */