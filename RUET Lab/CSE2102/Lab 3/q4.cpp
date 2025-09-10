//q6
#include<bits/stdc++.h>
using namespace std;
int main(){
    bool valid=true;
    for(int i=-100; i<=100; i++){
        int ls=2*i;
        int rs=i+(i+(1/2));
        if(ls!=rs)valid=false;
    }
    if(valid)cout<<"True"<<endl;
    else cout<<"False"<<endl;
}