#include <iostream>
#include <string>
using namespace std;

class Complex{
    private:
        int real;
        int complex;
    public:
        Complex(int r=0, int c=0){
            real=r;
            complex=c;
        }
        void display(){
            cout<<real<<" + "<<"i"<<complex<<endl;
        }
        Complex operator + (Complex &ob){
            Complex result;
            result.real = real+ob.real;
            result.complex = complex+ob.complex;
            return result;
        }
};

int main(){
    Complex ob1(3,6), ob2(10,20) ;
    Complex ob3;
    ob3 = ob1 + ob2;
    ob3.display();
}