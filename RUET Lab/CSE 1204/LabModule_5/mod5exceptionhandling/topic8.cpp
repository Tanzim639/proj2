#include<bits/stdc++.h>
using namespace std;

void Display(list<int>li){
    for(auto it=li.begin(); it!=li.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
}
void DisplayRev(list<int>li){
    for(auto it=li.rbegin(); it!=li.rend(); it++){
        cout<<*it<<" ";
    }cout<<endl;
}

int main(){
    list<int>li;
    li.push_back(10);
    li.push_back(5);
    li.push_back(100);
    li.push_back(40);
    li.push_back(22);
    li.push_back(1);
    li.push_back(19);
    li.push_back(15);
    li.push_front(1000);
    li.push_front(2000);
    Display(li);
    DisplayRev(li);
    cout<<li.front()<<endl;
    cout<<li.back()<<endl;
    li.pop_back();
    li.pop_front();
    Display(li);
    cout<<*find(li.begin(), li.end(), 19)<<endl;
    

}