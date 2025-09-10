#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


void linearFit(const vector<double>& x, const vector<double>& y, double& a1, double& a0) {
    int n = x.size();
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    a1 = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    a0 = (sumY - a1 * sumX) / n;
}


void nonlinearFit(const vector<double>& x, const vector<double>& y, double& a1, double& a0) {
    int n = x.size();
    double sumLogX = 0, sumLogY = 0, sumLogXLogY = 0, sumLogX2 = 0;


    for (int i = 0; i < n; i++) {
        double logX = log(x[i]);
        double logY = log(y[i]);

        sumLogX += logX;
        sumLogY += logY;
        sumLogXLogY += logX * logY;
        sumLogX2 += logX * logX;
    }


    a1 = (n * sumLogXLogY - sumLogX * sumLogY) / (n * sumLogX2 - sumLogX * sumLogX);
    double logA0 = (sumLogY - a1 * sumLogX) / n;
    a0 = exp(logA0);
}

int main() {
    int n, choice;
    cout << "Choose an option:\n";
    cout << "1. Linear Fit (y = a1 * x + a0)\n";
    cout << "2. Nonlinear Fit (y = a0 * x^a1)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter the x values:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter the y values:\n";
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    double a1, a0;
    if (choice == 1) {

        linearFit(x, y, a1, a0);
        cout << "The best fit line is: y = " << a1 << " * x + " << a0 << endl;
    } else if (choice == 2) {

        nonlinearFit(x, y, a1, a0);
        cout << "The best fit curve is: y = " << a0 << " * x^" << a1 << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

