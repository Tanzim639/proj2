#include <bits/stdc++.h>
using namespace std;
int main() {
    double a1 = 11.0 / 6.0, a2 = -1.0, a3 = 1.0 / 6.0;
    double b[100];
    double R[100];
    double epsilon = 0.001;
    int n = 14;

    b[1] = 1.0;

    for (int i = 2; i <= n; i++) {
        if (i == 2) {
            b[i] = a1;
        } else if (i == 3) {
            b[i] = a1 * b[i - 1] + a2 * b[i - 2];
        } else {
            b[i] = a1 * b[i - 1] + a2 * b[i - 2] + a3 * b[i - 3];
        }

        R[i] = b[i - 1] / b[i];

        cout << "b_" << i << " = " << fixed << setprecision(6) << b[i] << endl;
        cout << "b_" << i - 1 << " / b_" << i << " = " << fixed << setprecision(6) << R[i] << endl;

        if (i >= 4) {
            double deltaR = fabs(R[i] - R[i - 1]);
            if (deltaR < epsilon) {
                cout << "Converged at b_" << i << " with approximate smallest root: " << b[i] << endl;
                break;
            }
        }
    }

    return 0;
}
