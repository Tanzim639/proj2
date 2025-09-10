#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize data points
    vector<double> x = {1, 3, 5, 7};
    vector<double> y = {24, 120, 336, 720};
    int n = x.size();

    // Desired value of x
    double value = 8;

    // Initialize result
    double result = 0.0;

    // Lagrange Interpolation
    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term *= (value - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    // Output the result
    cout << "The value of y(" << value << ") using Lagrange Interpolation is: " << result << endl;

    return 0;
}
