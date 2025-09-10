// 6 number
#include <bits/stdc++.h>
using namespace std;
 //checks if the first element's square is 2nd number
bool p(int x, int y) {
    return x*x==y;
}
int main() {
    vector<int> A = {1, 2, 3};
    vector<int> B = {1, 4, 9};

    bool uni_uni = true;
    for (int x : A) {
        for (int y : B) {
            uni_uni = uni_uni && p(x, y);
        }
    }
    cout << "Proposition 1: " << uni_uni << endl;

    bool exis_uni = false;
    for (int x : A) {
        bool forAllY = true;
        for (int y : B) {
            forAllY = forAllY && p(x, y);
        }
        exis_uni = exis_uni || forAllY;
    }
    cout << "Proposition 2: " << exis_uni << endl;

    bool uni_exis = true;
    for (int x : A) {
        bool existsY = false;
        for (int y : B) {
            existsY = existsY || p(x, y);
        }
        uni_exis = uni_exis && existsY;
    }
    cout << "Proposition 3: " << uni_exis << endl;

    bool exis_exis = false;
    for (int x : A) {
        for (int y : B) {
            exis_exis = exis_exis || p(x, y);
        }
    }
    cout << "Proposition 4: " << exis_exis << endl;

}
