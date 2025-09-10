
#include<bits/stdc++.h>
using namespace std;

class BuckeyClass{
    private:
        string name;
    
    public:
        void setName(string s){
            name=s;
        }
        string getName(){
            return name;
        }
};

int main(){
    BuckeyClass bo;
    bo.setName("sir max well");
    cout<<bo.getName();
}