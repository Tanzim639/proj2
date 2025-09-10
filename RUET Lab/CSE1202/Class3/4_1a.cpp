#include <bits/stdc++.h>
using namespace std;

//Traverse an array and count the odd numbers and add them

int main(){
    int n=10;
    int cnt=0, sum=0; 
    int arr[n]={12,45,22,87,67,46,78,16,9,1};
    for(int i=0; i<n; i++){
        if(arr[i]%2){
            cnt++;
            sum+=arr[i];
        }
    }
    cout<<"Odd count is "<<cnt<<" and their sum is "<<sum;
}