#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string,int>m;
  int n;  cin>>n;
  while(n--)
  {
    string s; cin>>s;
    m[s]++;
  }
  for(auto &pr: m)
  {
    cout<<pr.first<<" "<<pr.second<<endl;
  }
}
