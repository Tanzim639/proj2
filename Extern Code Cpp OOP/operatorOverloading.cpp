#include <bits/stdc++.h>
using namespace std;

class Sally{
    private:
        int h;
    public:
        //int h;
        Sally(){

        }
        Sally(int num){
            h=num;
        }

        Sally operator-(Sally obj){
            Sally brandNew;
            brandNew.h=h-obj.h;
        }

        void p(){
            cout<<h<<endl;
        }
};

int main() {
    Sally a(12),b(7),c;
    //c=a-b;
    //cout<<c.h<<endl;
    //c.p();
    (a-b).p();
}
