#include<bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long

int main(){
    ofstream f("filename.txt");
    ll cnt=0;
    while(f.is_open()){
        if(cnt>=1000)break;
        ll num=rand();
        // num%=100000;
        num%=100;
        f<<num<<endl;
        cnt++;
    }
    f.close();
}

