#include<bits/stdc++.h>
using namespace std;
#define ll long long
//find the max number and its first and last occurance 
//O(n) time complexity
int main(){
    ll mx=INT_MIN;
    ifstream f;
    f.open("F:/VS Code/RUET Lab/CSE2102/Lab 4/filename.txt");
    ll number;
    while(f>>number){
        mx=max(mx,number);
    }
    cout<<"Largest numkber is "<<mx<<endl;
    f.clear();  
    f.seekg(0, ios::beg);
    ll first=0, second=0;
    bool firstDone=false;
    ll indx=0;
    ll num;
    while(f>>num){
        indx++;
        if(num==mx && !firstDone){
            firstDone=true;
            first=indx;
        }
        if(num==mx){
            second=indx;
        }
    }
    cout<<"First occurance is at "<<first<<" and second occurance is at "<<second<<endl;
    f.close();
}