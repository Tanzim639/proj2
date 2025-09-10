#include <bits/stdc++.h>
using namespace std;
// Word Capitalization
//https://codeforces.com/problemset/problem/281/A
int main(){
  string s; cin>>s;
  if(s[0]>96)s[0]-=32;
  cout<<s<<endl;
}
