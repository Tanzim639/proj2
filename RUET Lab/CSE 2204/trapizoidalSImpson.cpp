#include<bits/stdc++.h>
using namespace std;
#define ll long long

double getTrapezoidal(vector<int>y, int h){
    int sumy = accumulate(y.begin(), y.end(), 0)-y[0]-y[y.size()-1];
    double ans = (h/2.0)*(0LL+y[0]+2*sumy+y[y.size()-1]);
    return ans;
} 

double getSimpson13(vector<int>y, int h){ 
    int sumodd=0, sumeven=0;
    for(int i=0; i<y.size(); i++){
        if(i==0 || i==y.size()-1)continue;
        if(i%2==1)sumodd+=y[i];
        else sumeven+=y[i];
    }
    double ans = (h/3.0)*(0LL+y[0]+4*sumodd+2*sumeven+y[y.size()-1]);
    return ans;
} 

double getSimpson38(vector<int>y, int h){
    int sum1=0, sum2=0;
    for(int i=0; i<y.size(); i++){
        if(i==0 || i==y.size()-1)continue;
        if((i)%3){
            sum2+=y[i];
        }else{
            sum1+=y[i];
        }
    }
    double ans = (3.0*h/8.0)*(y[0]+2*sum1+3*sum2+y[y.size()-1]);
    return ans;
} 

int main(){
    vector<int>x = {0,1,2,3,4};
    vector<int>y = {2,7,12,10,5};
    vector<int>a = {-4,-2,0,2,4,6,8};
    vector<int>b = {1,3,4,4,6,9,14};
    int h = x[1]-x[0];
    int hh = a[1]-a[0];
    double ans1 = getTrapezoidal(y,h);
    double ans2 = getSimpson13(y,h);
    double ans3 = getSimpson38(y,h);
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    cout<<getTrapezoidal(b,hh)<<" "<<getSimpson13(b,hh)<<" "<<getSimpson38(b,hh)<<endl;
}