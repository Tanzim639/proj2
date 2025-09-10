#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " + i" << imag << '\n';
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4), cc, cc2;
    Complex c3;
    c3 = c1 + c2; // c3=c1.add(c2)
    cc2=cc+c2;
    //c3.print();
    cc2.print();
}