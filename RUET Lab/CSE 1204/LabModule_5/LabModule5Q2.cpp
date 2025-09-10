#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        double realPart = (real * other.real + imag * other.imag) / denominator;
        double imagPart = (imag * other.real - real * other.imag) / denominator;
        return Complex(realPart, imagPart);
    }

    void display() const {
       cout << real;
        if (imag >= 0) {
            cout << "+" << imag << "j";
        } else {
            cout << imag << "j";
        }
    }
};

class Circuit {
private:
    Complex impedance;

public:
    Circuit(double real, double img) : impedance(real, img) {}

    Complex calculateCurrent(const Complex& inputVoltage) const {
        Complex sum = inputVoltage / impedance;  
        return sum;
    }

    void display() const {
        impedance.display();
    }

    friend ostream& operator<<(ostream& os, const Circuit& circuit) {
        os << "Impedance: ";
        circuit.display();
        return os;
    }
};

int main(){
    Complex inputVoltage(100, 50);
    Circuit z1(3, 4), z2(4, -3), z3(0, 6);

    Circuit parallelImpedance = (z1 * z2 * z3) / (z1 + z2 + z3);

    Complex current = parallelImpedance.calculateCurrent(inputVoltage);

    cout << "Input Voltage: ";
    inputVoltage.display();
    cout << endl;

    cout << parallelImpedance << endl;

    cout << "Current: ";
    current.display();
    cout << endl;

}

