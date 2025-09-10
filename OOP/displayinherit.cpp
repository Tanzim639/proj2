#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
        string name;
        int age;
        int nid;

    public:
        Person(string name, int age, int nid){
            this->name = name;
            this->age = age;
            this->nid = nid;
        }

        void display(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<nid<<endl;
        }
};

class Student: public Person{
    private:
        // string name;
        // int age;
        // int nid;
        int roll;
        double cgpa;
    
    public:
        Student(string nm, int ag, int ni, int rll, double cg): Person( nm,  ag,  ni){
            roll = rll;
            cgpa = cg;
        }

        void display(){
            Person::display();
            cout<<roll<<endl;
            cout<<cgpa<<endl;
        }
};

int main(){
    // Person p1("rohim" , 30, 12345);
    // p1.display();
    Student s1("rohim" , 20, 130, 2003111, 3.8);
    s1.display();

}
