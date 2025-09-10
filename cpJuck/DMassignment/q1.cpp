#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n), nums;
    for(int i=0; i<n; i++)cin>>v[i];
    int range = 1<<n;
    int ans=0;
    for(int bitmask=0; bitmask<range; bitmask++){
        int num=0;
        for(int j=0; j<n; j++){
            int mask = (bitmask>>j)&1;
            if(mask)num+=v[j];
        }
        ans+=num;
    }
    cout<<ans<<endl;
}