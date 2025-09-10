//descending a pair of vector ,,, but for the same v.first, ascending the v.second
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){
        return a.first>b.first;  //return what you wish for
    }
    return b.second>a.second;
}
int main(){
  int n;  cin>>n;
  vector<pair<int,int>>v(n);
  for(int i=0; i<n; i++){
    cin>>v[i].first>>v[i].second;
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0; i<n; i++){
    cout<<v[i].first<<" "<<v[i].second<<endl; 
  }
}
/*
//sorting array descending
 bool c(int a, int b){
  return a>b;
 }
 int arr[5]={2,1,3,5,4};
  sort(arr,arr+5,c);
  for(int i=0; i<5; i++){
    cout<<arr[i]<<endl;
  }
*/