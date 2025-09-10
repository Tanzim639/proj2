#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    for(int i=1;i<=t;i++){
        double r;
        double pi=3.141592653589793238462643383279502884197;
        cin>>r;
        double whl=4.00*r*r;
        double circ=pi*r*r;
        cout<<"Case "<<i<<": " <<fixed << setprecision(2)<<whl-circ<<endl;
    }
}
