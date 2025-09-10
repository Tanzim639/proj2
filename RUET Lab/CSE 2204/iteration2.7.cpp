#include <bits/stdc++.h>
using namespace std;


double g(double x) {
    return (cos(x) + 3) / 2;
}

void iterativeMethod(double x0, double tolerance, int maxIter = 100) {
    int n = 0;
    double x1;

    cout << fixed << setprecision(6);
    cout << "Iteration\txn\t\txn+1\t\t|xn+1 - xn|" << endl;

    while (n < maxIter) {
        x1 = g(x0);
        cout << n + 1 << "\t\t" << x0 << "\t" << x1 << "\t" << fabs(x1 - x0) << endl;

        if (fabs(x1 - x0) < tolerance) {
            cout << "Root found at x = " << x1 << " after " << n + 1 << " iterations." << endl;
            return;
        }

        x0 = x1;
        n++;
    }

    cout << "Maximum iterations reached. Approximate root is x = " << x1 << endl;
}

int main() {
    double x0 = 1.0;        // Initial guess
    double tolerance = 0.001; // Tolerance
    int maxIter = 100;      // Maximum number of iterations

    iterativeMethod(x0, tolerance, maxIter);

    return 0;
}
