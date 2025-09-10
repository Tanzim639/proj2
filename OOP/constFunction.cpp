#include <iostream>
using namespace std;

class Base
{
    mutable int x;

public:
    void setX(int a) { x = a; }
    int getX() const
    {
        x++;
        return x;
    }
};

int main()
{
    Base ob;
    ob.setX(100);
    cout<<ob.getX()<<endl;
}