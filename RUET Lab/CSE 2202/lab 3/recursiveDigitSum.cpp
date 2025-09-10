#include<bits/stdc++.h>
using namespace std;
#define ll long long


long long digsum(long long n){
    string s = to_string(n);
    long long ts=0;
    for(auto it: s){
        ts+=(it-'0');
    }
    return ts;
}

int superDigit(string n, int k) {
    long long sum=0;
    for(auto it: n){
        sum+= (it-'0');
    }
    sum*=k;
    while(sum>9LL){
        sum=digsum(sum);
    }
    return sum;
}

int main(){

}