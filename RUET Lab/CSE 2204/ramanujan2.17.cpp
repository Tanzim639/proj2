#include <bits/stdc++.h>
using namespace std;


int main() {
    double a1 = 1, a2 = -1.0/4, a3 = 1.0/36, a4 = -1.0/576, a5 = 1.0/14400, a6 = -1.0/518400, a7 = 1.0/25401600;
    double b[9];
    double R[8];
    
    b[1] = 1.0;
    b[2] = a1;
    b[3] = a1 * b[2] + a2 * b[1];
    b[4] = a1 * b[3] + a2 * b[2] + a3 * b[1];
    b[5] = a1 * b[4] + a2 * b[3] + a3 * b[2] + a4 * b[1];
    b[6] = a1 * b[5] + a2 * b[4] + a3 * b[3] + a4 * b[2] + a5 * b[1];
    b[7] = a1 * b[6] + a2 * b[5] + a3 * b[4] + a4 * b[3] + a5 * b[2] + a6 * b[1];
    b[8] = a1 * b[7] + a2 * b[6] + a3 * b[5] + a4 * b[4] + a5 * b[3] + a6 * b[2] + a7 * b[1];
    
    for (int i = 2; i <= 8; i++) {
        R[i] = b[i-1] / b[i];
    }
    
    for (int i = 1; i <= 8; i++) {
        cout << "b_" << i << " = " << fixed << setprecision(6) << b[i] << endl;
    }
    
    for (int i = 2; i <= 8; i++) {
        cout << "b_" << i-1 << " / b_" << i << " = " << fixed << setprecision(6) << R[i] << endl;
    }

    double epsilon = 0.001;
    if (abs(R[8] - R[7]) < epsilon) {
        cout << "Convergence reached. Approximate root = " << fixed << setprecision(6) << R[8] << endl;
    }

    return 0;
}
