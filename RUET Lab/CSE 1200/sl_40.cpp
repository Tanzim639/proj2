#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b){
	if (b == 0)return a;
	return gcd(b, a % b);
}
ll findlcm(int arr[], int n)
{
	ll ans = arr[0];	
	for (int i = 1; i < n; i++) ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
	return ans;
}
int main(){
    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    cout<<findlcm(arr,n)<<endl;;
	
}
