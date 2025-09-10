#include <iostream>
#include <vector>

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
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter values of x:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter values of y:\n";
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    double a1, a0;
    linearFit(x, y, a1, a0);

    cout << "The best fit line is: y = " << a0<<"+"<< a1  << " * x  "<<endl;

    return 0;
}
