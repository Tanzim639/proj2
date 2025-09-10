#include<bits/stdc++.h>
using namespace std;

void printV(vector<int>&v)
{
  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<"  ";
  }
  cout<<endl;
}


int main()
{
  //Vector of vectors
  int N; cin>>N;
  vector<vector<int>>v;
  for(int i=0; i<N; i++)
  {
    int n;  cin>>n;
    vector<int>temp;
    for(int j=0; j<n; j++)
    {
      int x;  cin>>x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }
  for(int i=0; i<v.size(); i++)
  {
    printV(v[i]);
  }

  return 0;
}

/*
VECTOR OF PAIRS:

void printVec(vector<pair<int,int>>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i].first << "  " << v[i].second << endl;
    }  
}

vector<pair<int,int>>a;      //vector<pair<int,int>>a = { {2,1},{4,8},{12,6} };
  printVec(a);
*/

/*
ARRAY OF VECTORS:
void printV(vector<int>&v)
{
  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<"  ";
  }
  cout<<endl;
}
 int N;  cin>>N;   
  vector<int>v[N];  //array of vectors.. here N vectors created size of 
  for(int i=0; i<N; i++)
  {
    int n;  cin>>n;
    for(int j=0; j<n; j++)
    {
      int x;  cin>>x;
      v[i].push_back(x);
    }
  }
  for(int i=0; i<N; i++)
  {
    printV(v[i]);
  }
*/