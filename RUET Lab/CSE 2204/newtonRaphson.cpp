
#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x)
double f(double x) {
    return 3*x-cos(x)-1; // Example: Solve x^2 - 4 = 0
}

double df(double x){
    return 3+sin(x);
}

double porer(double x1){
    return x1-f(x1)/df(x1);
}

// Secant method implementation
void newtonRaphson(double a, double tol, int maxIter) {
    double x2;
    int iter = 0;

    cout << "Iteration xn f(xn) f'(xn) x(n+1)" << endl;

    do {
      cout<<iter+1<<" "<<f(a)<<" "<<df(a)<<" "<<porer(a)<<endl;
      iter++;
      a=porer(a);
    } while (iter < maxIter);

    cout << a<<endl;
}

int main() {
    double a = 0; // Initial guess 1
    double b = 2.0; // Initial guess 2
    double tolerance = 1e-6;
    int maxIterations = 20;

    newtonRaphson(a, tolerance, maxIterations);

    return 0;
}
