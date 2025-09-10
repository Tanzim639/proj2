#include <bits/stdc++.h>
using namespace std;
int add(int x, int y){
    int c;
    while (y != 0){
        c = x & y;  
        x = x ^ y; 
        y = c << 1;
    }return x;
}
int substraction(int x, int y){
    y = ~y + 1;
    return add(x, y);
}
int multiplication(int x, int y){
    int ans = 0;
    for (int i = 1; i <= y; i++) ans = add(ans, x);
    return ans;
}
void divide(int x, int y){
    if(y==0){
        cout<<"Undefined"<<endl;
        return;
    }
    int cnt = 0;
    while (1){
        if(substraction(x,y)<0)break;
        x = substraction(x, y); cnt++;
    }
    cout << "Quotient is " << cnt << " and remainder is " << x << endl;
}
int main(){
    cout << "Enter two integers: ";
    int x, y; cin >> x >> y;
    cout << "Addition is " << add(x, y) << endl;
    cout << "Substraction is " <<substraction(x, y) << endl;
    cout << "Multiplication is " <<multiplication(x, y) << endl;
    divide(x,y);
}