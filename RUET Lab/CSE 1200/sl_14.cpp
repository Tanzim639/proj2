#include <bits/stdc++.h>
using namespace std;

int main() {
    float n,f;
    cin >> n;
    f = floor(n);
    if(n-f==0)cout << "int " << (int)n << endl;
    else{ 
        cout << setprecision(3) <<fixed << "float " << (int)n << " " << n-f << endl;
    }
}