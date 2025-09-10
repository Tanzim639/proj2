//q5
#include<bits/stdc++.h>
using namespace std;
int main(){
    double sum=0;
    double a=1;
    int cnt=0;
    while(cnt<1000000){
        sum+=a;
        a/=2;
        cnt++;
    }
    cout<<fixed<<setprecision(20)<<sum<<endl;
}