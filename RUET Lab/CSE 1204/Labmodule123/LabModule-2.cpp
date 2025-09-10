#include<iostream>
using namespace std;
class Test{
    int x;
    int y;
    static int z;
    static int sum;
    static int max;
    static int cnt;
    public:
    Test(){
        x=0;
        y=0;
        z++;
        cout<<"Object is called "<<z<<" times"<<endl;
    }
    Test(int x,int y){
        this->x=x;
        this->y=y; 
        z++;
        sum+=x;
        if(max<y){
            max=y;
            cnt=z;
        }
        cout<<"Object is called "<<z<<" times"<<endl;
       
    }
    Test(Test &temp){
        this->x=temp.x;
        this->y=temp.y;
        z++;
        sum+=x;
        cout<<"Object is called "<<z<<" times"<<endl;
        if(max<y){
            max=y;
            cnt=z;
        }
    }
    void setx(int x1){
        this->x=x1;
        sum+=x;
    }
    void sety(int y){
        this->y=y;
        if(max<y){max=y;cnt=z;}
    }
    static void getz(){
        cout<<z<<endl;
    }
   
    static void getsum(){
        cout<<"Sum is:"<<sum<<endl;
    }
    
    static void getmax(){
        cout<<"Max is: "<<cnt<<endl;
    }

};
int Test::z=0;
int Test::sum=0;
int Test::max=-12342344;
int Test::cnt=0;


int main(){
    
    Test tanvir(1,2);
    Test raihan(3,2);
    Test Tanmoy(2,3);
    Test Shanto(tanvir);
    Test Hasa(raihan);
    Test::getmax();
    Test::getsum();

}