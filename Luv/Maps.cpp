// Map => stores Key-Value pairs
// it is stored in sorted order of Key
//  m.clear()  ---- clears the map
// unorderd_map<  ,  >m ------ same as map, just Key is not sorted   0(1)

#include <bits/stdc++.h>
using namespace std;

void prntMap(map<int,string>&m)
{
    cout<<"Map size: "<<m.size()<<endl;
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
  map<int,string>m;
  m[1]="abc";   //m.insert({4,"abc"});
  m[5]="cdc";   // O(log(n))
  m[3]="acd";
  m.insert({4,"afg"}); 
  m[6];  //takes empty string.. for int ,would take 0
  m[5]="hehe"; 
  m[2]="sad"; //gonna replace this with previous value
//   map<int,string>::iterator it;
//   for(it=m.begin(); it!=m.end(); it++)
//   {
//     cout<<(*it).first<<" "<<(*it).second<<endl;
//   }
//   for(auto &pr: m)
//   {
//     cout<<pr.first<<" "<<pr.second<<endl;
//   }

//m.erase(2);
auto itt=m.find(2);
if(itt!=m.end()) m.erase(itt);

prntMap(m);
auto it=m.find(3);
cout<<it->first<<" "<<it->second<<endl;

 
}
