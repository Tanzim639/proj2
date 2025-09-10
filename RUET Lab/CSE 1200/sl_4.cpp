#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N; cin>>N;
    int p=0,n=0,o=0,e=0;
    for(int i=0; i<N; i++){
        int tmp; cin>>tmp;
        if(tmp>0)p++;
        if(tmp<0)n++;
        if(tmp%2)o++;
        else e++;
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;
}