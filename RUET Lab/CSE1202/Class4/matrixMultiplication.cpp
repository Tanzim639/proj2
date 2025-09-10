#include <bits/stdc++.h>
using namespace std;



int main(){
    int a,b; cin>>a>>b;
    int m1[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>m1[i][j];
        }
    }
    int c,d; cin>>c>>d;
    int m2[c][d];
    for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            cin>>m2[i][j];
        }
    } 
    int r[a][d];
    for(int i=0; i<a; i++){
        for(int j=0; j<d; j++){
            r[i][j]=0;
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<d; j++){
            for(int k=0; k<b; k++){
                r[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<d; j++){
           cout<<r[i][j]<<" ";
        }cout<<endl;
    }

}







