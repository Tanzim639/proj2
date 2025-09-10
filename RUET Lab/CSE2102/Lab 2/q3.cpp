// 8
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int z; cin >> z;
    vector<pair<ll, ll>> vp;
    for (int x = 1; x <= z; x++){
        for (int y = 1; y <= sqrt(z * z - x * x); y++){ 
            if (y * y + x * x == z * z)vp.push_back({x, y});
        }
    }
    if (vp.size() == 0)cout << "doesnt exists" << endl;
    else{
        for (auto x : vp)cout << x.first << " " << x.second << endl;        
    }
}