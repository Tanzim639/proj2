//q2
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>a={1,2,3};
    vector<int>b={8,9};
    int asz=a.size(), bsz=b.size();
    for(int i=0; i<asz; i++){
        for(int j=0; j<bsz; j++){
            cout<<"("<<a[i]<<","<<b[j]<<")"<<endl;
        }
    } 
}
