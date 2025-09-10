#include<bits/stdc++.h>
using namespace std;

class Division{
private:
    string subjectName;

public:
    void setName(){
        cout<<"Whats your subject name? ";
        cin>>subjectName;
    }
    void getSubjectName(){
        cout << "Subject name is " << subjectName << endl;
    }
};

class Science : public Division {
    private:
        int numberOfLabs;
    public:
        void setNumberOfLabs(){
            cout<<"How many labs it has? ";
            cin>>numberOfLabs;
        }
        void getNumberOfLabs(){
            cout<<"Total "<<numberOfLabs<<" labs"<<endl;
        }
    
};

class Commerce : public Division {
    private:
        int numberOfFieldWorks;
    public:
        void setNumberOfFieldWorks(){
            cout<<"How many field works it has? ";
            cin>>numberOfFieldWorks;
        }
        void getNumberOfFieldWorks(){
            cout<<"Total "<<numberOfFieldWorks<<" field works"<<endl;
        }
    
};

int main() {

    Science scobj;
    scobj.setName();
    scobj.setNumberOfLabs();
    scobj.getSubjectName(); 
    scobj.getNumberOfLabs();

    Commerce cmobj;
    cmobj.setName();
    cmobj.setNumberOfFieldWorks();
    cmobj.getSubjectName(); 
    cmobj.getNumberOfFieldWorks();


}





