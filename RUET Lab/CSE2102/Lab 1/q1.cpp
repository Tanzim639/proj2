#include<bits/stdc++.h>
using namespace std;
int func(int a){
    int c = log2(a);
    return c*(a/2);
}
int main(){
    int a,b; cin>>a>>b;
    cout<<func(b)-func(a)+1<<endl;
}

 