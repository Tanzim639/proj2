#include<bits/stdc++.h>
using namespace std;
#define ll long long


void highestLowestPrimeFactor(int n) {
    //highest and lowest prime factor
    vector<bool> isPrime(n + 1, true);
    vector<int>hp(n+1,0), lp(n+1,0);
    for (int p = 2; p  < n; ++p) {
        if (isPrime[p]) {
            lp[p] = hp[p] = p;
            for (int i = p * 2; i <= n; i += p) {
                isPrime[i] = false;
                hp[i]=p;
                if(lp[i]==0){
                    lp[i]=p;
                }
            }
        }
    }

    cout << "Highest and lowest Prime factors up to " << n << " are:\n";
    for (int i = 2; i <= n; ++i) {
        cout<<i<<" --> "<<lp[i]<<" , "<<hp[i]<<endl;
    }
    cout << endl;
}

void primeFactors(int x){
    int n=100000;
    vector<bool> isPrime(n + 1, true);
    vector<int>hp(n+1,0), lp(n+1,0);
    vector<int>prime_factors;
    for (int p = 2; p  < n; ++p) {
        if (isPrime[p]) {
            lp[p] = hp[p] = p;
            for (int i = p * 2; i <= n; i += p) {
                isPrime[i] = false;
                hp[i]=p;
                if(lp[i]==0){
                    lp[i]=p;
                }
            }
        }
    }
    while(x>1){
        int prime_factor = lp[x];
        while(x%prime_factor==0){
            prime_factors.push_back(prime_factor);
            x/=prime_factor;
        }
    }
    for(int prime: prime_factors){
        cout<<prime<<" ";
    }
    cout<<endl;
}

void divisors(int x){
    int n=1e3+10;
    vector<vector<int>>divs(n+1,vector<int>());
    for(int i=2; i<n; i++){
        for(int j=i; j<n; j+=i){
            divs[j].push_back(i);
        } 
    }
    for(int i=1; i<=x; i++){
        cout<<i<<"-->";
        for(int div: divs[i]){
            cout<<div<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // highestLowestPrimeFactor(100);
    // primeFactors(24);
    divisors(100);
}