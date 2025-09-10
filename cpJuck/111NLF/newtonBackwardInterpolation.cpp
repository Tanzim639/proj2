#include <iostream>
#include <vector>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    // Initialize data points
    vector<double> x = {1, 3, 5, 7};
    vector<double> y = {24, 120, 336, 720};
    int n = x.size();

    // Create a backward difference table
    vector<vector<double>> diffTable(n, vector<double>(n, 0.0));

    // Fill the first column of the difference table with y values
    for (int i = 0; i < n; i++) {
        diffTable[i][0] = y[i];
    }

    // Calculate the backward differences
    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            diffTable[i][j] = diffTable[i][j - 1] - diffTable[i - 1][j - 1];
        }
    }

    // Print the backward difference table
    cout << "Backward Difference Table:" << endl;
    cout << "x\t";
    for (int j = 0; j < n; j++) {
        cout << "del^" << j << "y\t";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t";
        for (int j = 0; j <= i; j++) {
            cout << diffTable[i][j] << "\t";
        }
        cout << endl;
    }

    // Desired value of x
    double desired_x = 8;

    // Calculate h and p
    double h = x[1] - x[0];
    double p = (desired_x - x[n - 1]) / h;

    // Interpolation
    double result = y[n - 1];
    for (int i = 1; i < n; i++) {
        double product = p;
        for (int k = 1; k < i; k++) {
            product *= (p + k);
        }
        result += (product * diffTable[n - 1][i]) / factorial(i);
    }

    // Output the result
    cout << "\nThe value of y(" << desired_x << ") is: " << result << endl;

    return 0;
}
