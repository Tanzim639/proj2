#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int vp = 0;
        int ts = 0;
        for (int i = 0; i < n; ++i) ts += a[i];
        for (int i = 0; i < n; ++i) {
            if (a[i] + k > ts - a[i]) vp++;
        }
        cout << vp << endl;
    }
}

