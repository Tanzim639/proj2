#include <bits/stdc++.h>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    // Given data points
    vector<int> x = {1, 3, 5, 7};
    vector<int> y = {24, 120, 336, 720};
    int n = x.size();

    // Define the forward difference table and initialize it
    vector<vector<int>> diffTable(n, vector<int>(n, 0));

    // Fill the first column of diffTable with y values
    for (int i = 0; i < n; i++) {
        diffTable[i][0] = y[i];
    }

    // Compute the forward differences
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diffTable[i][j] = diffTable[i + 1][j - 1] - diffTable[i][j - 1];
        }
    }

    // Display the forward difference table
    cout << "Forward Difference Table:" << endl;
    cout << "x    y    ";
    for (int j = 1; j < n; j++) {
        cout << "∆" << j << "y    ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << "   " << y[i] << "    ";
        for (int j = 1; j < n - i; j++) {
            cout << diffTable[i][j] << "    ";
        }
        cout << endl;
    }

    // Desired x value for interpolation
    int desired_x = 8;

    // Calculate h
    int h = x[1] - x[0];

    // Calculate p
    double p = (desired_x - x[0]) / (double)h;

    // Initialize result with y[0]
    double result = y[0];

    // Newton's Forward Interpolation formula
    for (int i = 1; i < n; i++) {
        double product = p;
        for (int k = 1; k < i; k++) {
            product *= (p - k);
        }
        result += (product * diffTable[0][i]) / factorial(i);
    }

    // Print the interpolated result
    cout << "The value of y(" << desired_x << ") is: " << result << endl;

    return 0;
}
