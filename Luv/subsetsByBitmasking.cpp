
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>SG(vector<int>&nums){
    int n=nums.size();
    int totalsubsets=1<<n;
    vector<vector<int>>subsets;
    for(int mask=0; mask<totalsubsets; mask++){
        vector<int>subset;
        for(int i=0; i<n; i++){
            if(mask & 1<<i)subset.push_back(nums[i]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main(){
  int n; cin>>n;
  vector<int>v;
  for(int i=0; i<n; i++){
    int a; cin>>a;
    v.push_back(a);
  }
  vector<vector<int>>ans=SG(v);
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
       cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}
