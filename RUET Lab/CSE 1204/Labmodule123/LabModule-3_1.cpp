#include<bits/stdc++.h>
using namespace std;
    
class Father{
    private: 
        int money;
    protected:
        int gold;
    public:
        int land;
        void setGold(){
            cin>>gold;
        }
        void setLand(){
            cin>>land;
        }
        void getGold(){
            cout<<gold<<endl;
        }
        void getLand(){
            cout<<land<<endl;
        }

};

class Son: public Father{
    
};

class GrandSon: public Son{

};

int main(){
   GrandSon gs;
   gs.setLand();
   gs.setGold();
   gs.getLand();
   gs.getGold();
}
