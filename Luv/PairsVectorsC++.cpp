
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v)
{
  //cout << v.size() << endl;
  for(int i=0; i<v.size(); i++)
  {
    cout << v[i] << " ";
  }
  v.push_back(20);
}

int main()
{
  vector<int>a; 
  int n;  cin>>n;
  for(int i=0; i<n; i++) { int x;  cin>>x;  a.push_back(x); }
  printVec(a);
  printVec(a);

  return 0;
}


/*

 pair<int, string> p;
  // p=make_pair(2,"abc");
  p = {2, "abc"};
  // pair<int,string>p1 = p;  //will copy the value.. so p wont change
  // p1={3,"abc"};
  pair<int, string> &p2 = p; // pass by reference
  p2 = {3, "abc"};

  cout << p.first << " " << p.second << endl;

  // int a[]={4,7,3};
  // int b[]={8,1,23};  //need to make relation betwenn two arrays same indexes
  pair<int,int>p_array[3];
  p_array[0]={4,8}; p_array[1]={7,1}; p_array[2]={3,23};   swap(p_array[0],p_array[2]);
  for(int i=0; i<3; i++)
  {
    cout << p_array[i].first << "  " << p_array[i].second << endl;
  }


*/