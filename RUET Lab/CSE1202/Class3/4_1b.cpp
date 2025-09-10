#include <bits/stdc++.h>
using namespace std;

//Traverse an array and count the prime numbers and add them


int isPrime(int n){
    int sr=sqrt(n);
    for(int i=2; i<=sr; i++){
        if(n%i==0)return 0;
    }
    return 1;
}

int main(){
    int n=10; 
    int arr[n]={4,2,66,8,3,56,29,12,33,100};
    int cnt=0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(isPrime(arr[i])){
            cnt++; sum+=arr[i];
        }
    }
    cout<<"Total count of prime number is "<<cnt<<" and their sum is "<<sum;
}