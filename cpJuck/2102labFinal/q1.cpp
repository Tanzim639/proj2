// given an integer n, use the greedy algorithm to find the change for n taka using 5,10,20,50 and 100 taka notes
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cout<<"Enter the amount: "<<endl;
    int n;
    cin>>n;
    int notes[5] = {5,10,20,50,100};
    map<int,int>ans;
    for(int i=4; i>=0; i--){
        ans[notes[i]] = n/notes[i];
        n%=notes[i];
    }
    cout<<"Used money:"<<endl;
    for(auto it: ans){
        cout<<"note of "<<it.first<<" -> "<<it.second<<" times"<<endl;
    }
    cout<<endl;
    cout<<"Change is "<<n<<endl;
}