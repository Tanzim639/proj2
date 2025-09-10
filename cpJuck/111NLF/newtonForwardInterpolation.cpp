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

    // Create a forward difference table
    vector<vector<double>> diffTable(n, vector<double>(n, 0.0));

    // Fill the first column of the difference table with y values
    for (int i = 0; i < n; i++) {
        diffTable[i][0] = y[i];
    }

    // Calculate the forward differences
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            diffTable[i][j] = diffTable[i + 1][j - 1] - diffTable[i][j - 1];
        }
    }

    // Print the forward difference table
    cout << "Forward Difference Table:" << endl;
    cout << "x\t";
    for (int j = 0; j < n; j++) {
        cout << "del^" << j << "y\t";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t";
        for (int j = 0; j < n - i; j++) {
            cout << diffTable[i][j] << "\t";
        }
        cout << endl;
    }

    // Desired value of x
    double desired_x = 8;

    // Calculate h and p
    double h = x[1] - x[0];
    double p = (desired_x - x[0]) / h;

    // Interpolation
    double result = y[0];
    for (int i = 1; i < n; i++) {
        double product = p;
        for (int k = 1; k < i; k++) {
            product *= (p - k);
        }
        result += (product * diffTable[0][i]) / factorial(i);
    }

    // Output the result
    cout << "\nThe value of y(" << desired_x << ") is: " << result << endl;

    return 0;
}
