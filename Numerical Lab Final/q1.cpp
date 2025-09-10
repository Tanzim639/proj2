#include <bits/stdc++.h>
using namespace std;

double trapezoidalRule(double h, vector<double> &y){
    double sumy = 0;
    for (int i = 1; i <= y.size() - 2; i++) sumy += y[i];
    double ans = (h * (y[0] + 2 * sumy + y[y.size() - 1])) / 2.0;
    return ans;
}

signed main(){
    vector<double> x = {7.47, 7.48, 7.49, 7.50, 7.51, 7.52};
    vector<double> y = {1.93, 1.95, 1.98, 2.01, 2.03, 2.06};
    double h = (x[1] - x[0]);
    cout << trapezoidalRule(h, y) << "\n";
}
