#include <bits/stdc++.h>
using namespace std;

int main() {
    double a1 = 2, a2 = 0, a3 = -1.0 / 6, a4 = 0, a5 = 1.0 / 120, a6 = 0, a7 = -1.0 / 5040;
    double b[9];  
    double R[9];
    double epsilon = 0.0001;
    int i;
    b[1] = 1.0;

    b[2] = a1;
    b[3] = a1 * b[2] + a2 * b[1];
    b[4] = a1 * b[3] + a2 * b[2] + a3 * b[1];
    b[5] = a1 * b[4] + a2 * b[3] + a3 * b[2] + a4 * b[1];
    b[6] = a1 * b[5] + a2 * b[4] + a3 * b[3] + a4 * b[2] + a5 * b[1];
    b[7] = a1 * b[6] + a2 * b[5] + a3 * b[4] + a4 * b[3] + a5 * b[2] + a6 * b[1];
    b[8] = a1 * b[7] + a2 * b[6] + a3 * b[5] + a4 * b[4] + a5 * b[3] + a6 * b[2] + a7 * b[1];

    for (int i = 1; i <= 8; i++) {
        cout << "b_" << i << " = " << fixed << setprecision(6) << b[i] << endl;
    }

    cout << "Ratios of consecutive b_n terms:" << endl;

    for ( i = 2; i <= 8; i++) {
        R[i] = b[i - 1] / b[i];
        cout << "b_" << i - 1 << " / b_" << i << " = " << fixed << setprecision(6) << R[i] << endl;
    }

    double deltaR = fabs(R[8] - R[8 - 1]);
        if (deltaR < epsilon) {
            cout << "Convergence reached. Approximate root = " << fixed << setprecision(6) << R[8] << endl;
       
    }

    return 0;
}
