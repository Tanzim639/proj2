#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int>v={2,4,10,-6,6};
  cout<< any_of(v.begin(), v.end(), [](int x){return x<0;}) <<endl;  //returns true if any of elements is minus sign
  cout<< all_of(v.begin(), v.end(), [](int x){return x%2==0;}) <<endl;  //returns true if all of elements are even
  cout<< none_of(v.begin(), v.end(), [](int x){return x>10;}) <<endl;  //returns true if none of the elements are bigger than 10
}

/*
//LAMDA FUNCTION:
  cout<< [](int x, int y){return x+y;}(30,55) <<endl;
  auto mult = [](float x, float y){return x*y;};
  cout<< mult(2.5,10) <<endl;
*/