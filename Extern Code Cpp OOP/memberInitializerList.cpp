#include <bits/stdc++.h>
using namespace std;

class Sally{
    private:
        int length;
        int width;
    
    public:
        Sally(int a, int b):
        length(a), width(b)
        {
            cout<<"Constructor called"<<endl;
        }

        void printfunc(){
            cout<<length<<" "<<width<<endl;
        }
};

int main() {
    Sally obj(27,45);
    obj.printfunc();
}