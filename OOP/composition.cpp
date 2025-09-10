// UML Decomposition
#include <iostream>
#include <string>
using namespace std;
class Birthday
{
    int day;
    int month;
    int year;

public:
    Birthday(int d = 0, int m = 0, int y = 0)
    {
        day = d;
        month = m;
        year = y;
        cout << "Birthday Constructor is called" << endl;
    }
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void Display()
    {
        cout << "Date:"<<day<<" /"<<month<<" / "<<year<<endl;
    }
    ~Birthday()
    {
        cout << "Birthday destructor is called" << endl;
    }
};
class Person
{
    string name;
    Birthday obj;

public:
    Person(string s, int d = 0, int m = 0, int y = 0)
    {
        name = s;
        obj.setDate(d, m, y);
        cout << "Person Constructor is called" << endl;
    }
    void Display()
    {
        cout << "Name: " << name << endl;
        obj.Display();
    }
    ~Person()
    {
        cout << "Person destructor is called" << endl;
    }
};
int main()
{
    Person p("Ali", 3, 10, 2000);
    p.Display();
    // Nothing declare about Birhtday class directly
    // But when Person object destroyed Birthday class
    // also destroyed
}