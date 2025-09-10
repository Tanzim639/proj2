// 4 number
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "p | q | r | ~(p/\\q)/\\r | ~pV~r" << endl;
    cout << "-------------------------" << endl;
    for (int p = 0; p <= 1; ++p) {
        for (int q = 0; q <= 1; ++q) {
            for (int r = 0; r <= 1; ++r) {
                bool first = !(p && q) && r;
                bool second = (!p || !q) && r ;
                cout << p << " | " << q << " | " << r << " | " << first << " | " << second << endl;
            }
        }
    }
}
