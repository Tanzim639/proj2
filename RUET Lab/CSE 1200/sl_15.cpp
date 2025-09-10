#include <bits/stdc++.h>
using namespace std;
int main(){
  string a,b; cin>>a>>b;
  for(int i=0; i<a.size(); i++){
    if(a[i]<97)a[i]+=32;
    if(b[i]<97)b[i]+=32;
  }
  int sa=0, sb=0;
  for(int i=0; i<a.size(); i++){
    sa+=a[i];
    sb+=b[i];
    if(sa>sb){
      cout<<1<<endl;
      break;
    }
    if(sb>sa){
      cout<<-1<<endl;
      break;
    }
  }
  if(sa==sb)cout<<0<<endl;
}