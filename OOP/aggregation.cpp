// UML Aggregation
// If Company class is deleted then
// Employee class is still on
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Employee
{
    string ename; 

public:
    Employee(string s)
    {
        ename = s;
    }
    string getName()
    {
        return ename;
    }
    ~Employee()
    {
        cout << "Employee is closed" << endl;
    }
};
class Company
{
    string cname;
    Employee *emp; // Aggregation
public:
    Company(string s, Employee *e)
    {
        cname = s;
        emp = e;
    }
    void getData()
    {
        cout << "Company Name: " << cname << endl;
        cout << "Employee Name: " << emp->getName() << endl;
    }
    ~Company()
    {
        cout << "Company is closed" << endl;
    }
};
int main()
{
    Employee e("Zaman");
    // cout << "Name=" << e.getName() << endl;

    Company c("HP", &e);
    c.getData();
    // Company object c is closed but
    // Employee object e is still on
}