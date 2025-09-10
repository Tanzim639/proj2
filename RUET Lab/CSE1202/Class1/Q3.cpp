#include <bits/stdc++.h>
using namespace std;



int main(){
    char a[100], b[100];
    gets(a); gets(b);
    int B=0;
    for(int i=0, j=0; a[i]!='\0'||b[i]!='\0'; i++, j++){
      if(a[i]!=b[i]){
        cout<<"Not Same";
        B=1;
        break;
      }
    }
    if(B==0)cout<<"Same";
}