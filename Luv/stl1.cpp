#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[5]={3,56,2,4,9};
  cout<<*(min_element(arr,arr+5))<<endl;
  cout<<accumulate(arr+1,arr+3,100)<<endl;
  cout<<count(arr,arr+5,5)<<endl;
  cout<<*find(arr,arr+5,56)<<endl;
  string s="abcde";  reverse(s.begin()+1,s.end()); cout<<s<<endl;
}
