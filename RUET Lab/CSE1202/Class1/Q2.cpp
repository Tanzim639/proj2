#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin>>a>>b;  int haha=a*b;
    int ans=0;
    while(1){
      if(b==0){
        ans=a;
        break;
      }
      int temp=b;
      b=a%b;
      a=temp;
    }
    
    cout<<"GCD is "<<ans<<endl;
    
    cout<<"LCD is "<<haha/ans<<endl;
}