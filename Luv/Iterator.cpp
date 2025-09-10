#include <bits/stdc++.h>
using namespace std;

int main()
{  
  
  
  return 0;
}

/*
//ITERATOR:
  vector<int>v={4,23,1,6,9};
    //vector<int>::iterator it = v.begin();               //cout << *(it+1) << endl;
    for(auto it=v.begin(); it!=v.end(); it++)
    {
      cout<< (*it) << endl;
    }

     vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
  //vector<pair<int,int>>::iterator itt;
  for(auto itt=v_p.begin(); itt!=v_p.end(); itt++)
  {
    cout<<(*itt).first<<"  "<<(*itt).second<<endl;      //(*it).first is same as (it->first)
  }
*/

/*
//RANGE BASED LOOPS:
  vector<int>v={4,2,6,45,9};
  for(int &value : v)   //passing by reference by using &
  {
    cout << value << endl;
  }


  vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
  for(pair<int,int>&value: v_p)
  {
    cout<< value.first << "  " << value.second << endl;
  }
    BY AUTO:
    vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
  for(auto &value: v_p)
  {
    cout<< value.first << "  " << value.second << endl;
  }
*/