#include <iostream>

using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int L = max(l1, l2);
    int R = min(r1, r2);

    if (L <= R) {
        cout << L << " " << R << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
