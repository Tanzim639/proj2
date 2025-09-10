#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    int ax[5] = {10, 20, 60, 40, 30};

    try {
        cout << "Enter index: ";
        cin >> i;

        if (i < 0 || i >= 5) {
            throw i;
        }

        cout << "ax[" << i << "]=" << ax[i] << endl;
    } catch (int index) {
        cout << " Out of Range Error. Index: " << index << endl;
    } catch (const char* errorString) {
        cout << "Caught exception: " << errorString << endl;
    }

}
