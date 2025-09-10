#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return pow(x, 3) - 2 * x - 5;  // f(x) = x^3 - 2x - 5
}

double f_prime(double x) {
    return 3 * pow(x, 2) - 2;  // f'(x) = 3x^2 - 2
}

void newtonRaphson(double x0, double tolerance, int maxIter = 100) {
    int n = 0;
    double x1;

    cout << fixed << setprecision(6);
    cout << "Iteration\txn\t\tf(xn)\t\t|xn+1 - xn|" << endl;

    while (n < maxIter) {
        double fxn = f(x0);
        double fxn_prime = f_prime(x0);

        if (fxn_prime == 0) {
            cout << "Derivative is zero, stopping the iteration." << endl;
            return;
        }

        x1 = x0 - fxn / fxn_prime;
        
        cout << n + 1 << "\t\t" << x0 << "\t" << fxn << "\t" << fabs(x1 - x0) << endl;

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
    double x0 = 2.0;          
    double tolerance = 0.0001; 
    int maxIter = 100;       

    newtonRaphson(x0, tolerance, maxIter);

    return 0;
}
