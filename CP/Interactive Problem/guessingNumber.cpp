#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int low=1, high=1e6+1;
    int ans=-1;
    while(high>=low){
        int mid=low+(high-low)/2;
        cout<<mid<<endl;
        cout<<flush;
        string s; 
        cin>>s;
        if(s=="<"){
            high=mid-1;
        }else{ //>=
            ans=max(ans,mid);
            low=mid+1;
        }
    }
    cout<<"! "<<ans<<endl;
    
}