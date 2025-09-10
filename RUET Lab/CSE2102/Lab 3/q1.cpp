#include <bits/stdc++.h>
using namespace std;

// Function to print elements of a set represented by a bit string
void func(int set, int n) {
    cout << "{ ";
    for (int i = 0; i < n; ++i) {
        if (set & (1 << i)) {
            cout << i + 1 << " ";
        }
    }
    cout << "}" << endl;
}


int binaryToDecimal(const string& binaryString) {
    int decimalValue = 0;
    int power = 0;

    // Iterate through the binary string from right to left
    for (int i = binaryString.length() - 1; i >= 0; --i) {
        if (binaryString[i] == '1') {
            // If the current bit is '1', add 2^power to the decimal value
            decimalValue += static_cast<int>(pow(2, power));
        }
        // Increment the power for the next bit
        ++power;
    }
 
    return decimalValue;
}

int main() {
    int n; 
    cout << "Enter the number of elements in the set: ";
    cin >> n;

    int A, B; 
    string a,b;
    cout << "Enter the bit string for subset A (as an integer): ";
    cin >> a;
    cout << "Enter the bit string for subset B (as an integer): ";
    cin >> b;
    A=binaryToDecimal(a);
    B=binaryToDecimal(b);

    int uniSt = A | B;
    cout << "A ∪ B: ";
    func(uniSt, n);

    int interSt = A & B;
    cout << "A ∩ B: ";
    func(interSt, n);

    int diffSt = A & ~B;
    cout << "A - B: ";
    func(diffSt, n);

    int symmDiff = A ^ B;
    cout << "A ⊕ B: ";
    func(symmDiff, n);

}
