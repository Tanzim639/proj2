#include<bits/stdc++.h>
using namespace std;
#define ll long long

int longestIncreasingSubsequence(vector<int> v, int n){
    vector<int>tmp;
    tmp.push_back(v[0]);
    for(int i=1; i<n; i++){
        if(v[i]>tmp.back())tmp.push_back(v[i]);
        else{
            int ind = lower_bound(tmp.begin(), tmp.end(), v[i]) - tmp.begin();
            tmp[ind] = v[i];
        }
    }
    return int(tmp.size());
}


int main(){

}