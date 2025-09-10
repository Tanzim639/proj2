#include <bits/stdc++.h>
using namespace std;
double f(double x) {
    return pow(x, 3) - 2 * x - 5;
}

void falsePosition(double a, double b, double tolerance, int maxIter = 100) {
  
    if (f(a) * f(b) >= 0) {
        cout << "Invalid initial guesses. f(a) and f(b) must have opposite signs." << endl;
        return;
    }

    double c; 
    int iter = 0;

    cout << "Iteration\ta\t\tb\t\tc\t\tf(c)" << endl;

    while ((b - a) >= tolerance) {
        
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        
       
        cout << iter + 1 << "\t\t" << a << "\t" << b << "\t" << c << "\t" << f(c) << endl;

        if (fabs(f(c)) < tolerance) {
            cout << "Root found at c = " << c << " after " << iter + 1 << " iterations." << endl;
            return;
        }

        if (f(a) * f(c) < 0) {
            b = c; 
        } else {
            a = c; 
        }

        iter++;

        if (iter >= maxIter) {
            cout << "Maximum iterations reached. Approximate root is c = " << c << endl;
            return;
        }
    }

    cout << "Root found at c = " << c << " after " << iter << " iterations." << endl;
}

int main() {
    double a = 2, b = 3;      
    double tolerance = 0.0001; 
    int maxIter = 100;         

    falsePosition(a, b, tolerance, maxIter);

    return 0;
}
