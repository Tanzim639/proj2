// Constructor run when an object is created.. Deconstructor run when an object is destroyed


#include<bits/stdc++.h>
using namespace std;

class BuckeyClass{
    private:
        string name;
    
    public:
        BuckeyClass(string z);
        // BuckeyClass(string z){
        //     name=z;
        // }
        ~BuckeyClass();       
        string getName(){
            return name;
        }
        void printP();
};

BuckeyClass::BuckeyClass(string z){ //Constructor
    name=z;
};

BuckeyClass::~BuckeyClass(){ //Deonstructor
    cout<<"Deconstructor callled"<<endl;
};


void BuckeyClass::printP(){
    cout<<"hahaha"<<endl;
}



int main(){
    BuckeyClass bo("MR ABC"); //bo is an object
    BuckeyClass *ptr = &bo;  // pointer of bo
    cout<<bo.getName()<<endl;;
    bo.printP();
    cout<<ptr->getName()<<endl;;

}