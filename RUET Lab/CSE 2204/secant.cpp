#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x) {
    return x * x * x - 2 * x - 5;
}

int main() {
    double x0, x1, x2, epsilon;
    int maxIterations;

    cout << "Enter initial guess x0: ";
    cin >> x0;
    cout << "Enter initial guess x1: ";
    cin >> x1;
    cout << "Enter tolerance epsilon: ";
    cin >> epsilon;
    cout << "Enter maximum number of iterations: ";
    cin >> maxIterations;

    int n = 0;
    cout << "Iteration\tx_n\tf(x_n)\t|x_{n+1} - x_n|\n";
    cout << "--------------------------------------------------------\n";
    while (n < maxIterations) {
        double fx0 = f(x0);
        double fx1 = f(x1);

        if (fabs(fx1 - fx0) < 1e-12) {
            cout << "Error: Division by zero. f(x1) - f(x0) is too small.\n";
            break;
        }

        x2 = x1 - fx1 * (x1 - x0) / (fx1 - fx0);
        double diff = fabs(x2 - x1);

        cout << n + 1 << "\t" << fixed << setprecision(6) << x1 << "\t" << fixed << setprecision(6) << fx1 << "\t" << fixed << setprecision(6) << diff << endl;

        if (diff < epsilon) {
            cout << "Convergence reached. Root = " << fixed << setprecision(6) << x2 << endl;
            break;
        }

        x0 = x1;
        x1 = x2;
        n++;
    }

    if (n == maxIterations) {
        cout << "Maximum iterations reached. Last approximation: " << fixed << setprecision(6) << x2 << endl;
    }

    return 0;
}
