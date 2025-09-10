#include <bits/stdc++.h>
using namespace std;

int main() {
    double a1 = 1.0, a2 = 1.0, a3 = 1.0 / 2.0, a4 = 1.0 / 6.0, a5 = 1.0 / 24.0;
    double b[7];
    double R[7];
    double epsilon = 0.0001;

    b[1] = 1.0;

    b[2] = a1;
    b[3] = a1 * b[2] + a2 * b[1];
    b[4] = a1 * b[3] + a2 * b[2] + a3 * b[1];
    b[5] = a1 * b[4] + a2 * b[3] + a3 * b[2] + a4 * b[1];
    b[6] = a1 * b[5] + a2 * b[4] + a3 * b[3] + a4 * b[2] + a5 * b[1];

    for (int i = 1; i <= 6; i++) {
        cout << "b_" << i << " = " << fixed << setprecision(6) << b[i] << endl;
    }

    cout << "Ratios of consecutive b_n terms:" << endl;

    for (int i = 2; i <= 6; i++) {
        R[i] = b[i - 1] / b[i];
        cout << "b_" << i - 1 << " / b_" << i << " = " << fixed << setprecision(6) << R[i] << endl;
    }

    double deltaR;
    for (int i = 3; i <= 6; i++) {
        deltaR = fabs(R[i] - R[i - 1]);
        if (deltaR < epsilon) {
            cout << "Converged at b_" << i << " with approximate root: " << b[i] << endl;
            break;
        }
    }

    return 0;
}
