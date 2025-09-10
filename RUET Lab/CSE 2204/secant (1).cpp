
#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x)
double f(double x) {
    return 3*x-cos(x)-1; // Example: Solve x^2 - 4 = 0
}

// Secant method implementation
void secantMethod(double x0, double x1, double tol, int maxIter) {
    double x2;
    int iter = 0;

    cout << "Iteration\tx0\t\tx1\t\tx2\t\tf(x2)\n";
    do {
        // Calculate the next approximation
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));

        // Display the iteration details
        cout << iter + 1 << "\t\t" << x0 << "\t" << x1 << "\t" << x2 << "\t" << f(x2) << endl;

        // Check for convergence
        if (x1==x2) {
            cout << "Root found: " << x2 << endl;
            return;
        }

        // Update values for the next iteration
        x0 = x1;
        x1 = x2;
        iter++;
    } while (iter < maxIter);

    cout << "Failed to converge to a root within " << maxIter << " iterations.\n";
}

int main() {
    double x0 = 2.5; // Initial guess 1
    double x1 = 2.0; // Initial guess 2
    double tolerance = 1e-6;
    int maxIterations = 100;

    secantMethod(x0, x1, tolerance, maxIterations);

    return 0;
}
