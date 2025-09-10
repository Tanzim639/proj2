#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int m; cin>>m;
    vector<int>v1(m);
    for(int i=0;i<m;i++)cin>>v1[i];
    sort(v1.begin(),v1.end());
    int ans=0;
    for(int i=0;i<m;i++){
      if(binary_search(v.begin(),v.end(),v1[i])) ans++;
    }
    cout<<ans<<endl;
}

