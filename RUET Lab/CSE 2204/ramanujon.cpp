#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x)
void f(vector<double>& a) {
    a[1] = 11.0 / 6.0; // Floating-point division
    a[2] = -1;
    a[3] = 1.0 / 6.0; // Floating-point division
}

// Secant method implementation
void secantMethod(vector<double>& a) {
    f(a);
    vector<double> b(12, 0);  // Initialize with zeros to prevent out-of-bound access
    b[1] = 1;
    for (int i = 2; i < 12; i++) {
        double sum = 0.0;
        int p = 1;
        for (int j = i - 1; j >= 1; j--) {
            sum += a[j] * b[p];
            p++;
        }
        b[i] = sum;
    }
    vector<double> c; // Initialize vector c
    for (int i = 1; i < 11; i++) {
        if (b[i + 1] != 0) { // Prevent division by zero
            c.push_back(b[i] / b[i + 1]);
        }
    }

    // Output the values in vector c
    for (auto x : c) {
        cout << x << endl;
    }
    cout<<fixed<<setprecision(2)<<c[c.size()-1]<<endl;
}

int main() {
    vector<double> a(10, 0); // Initialize a vector of size 10 with zeros
    secantMethod(a);  // Call secant method with the vector a

    return 0;
}
