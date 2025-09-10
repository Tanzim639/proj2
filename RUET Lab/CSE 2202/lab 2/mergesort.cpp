#include<bits/stdc++.h>
using namespace std;

void conquer(vector<int>&v, int left, int mid, int right){
    int sz1 = mid-left+1, sz2 = right-mid;
    vector<int>leftarr(sz1), rightarr(sz2);
    for(int i=0; i<sz1; i++){
        leftarr[i] = v[left+i];
    }
    for(int i=0; i<sz2; i++){
        rightarr[i] = v[mid+1+i];
    }
    int ptr1 = 0, ptr2=0, ptr3=left;
    while(ptr1<sz1 && ptr2<sz2){
        if(leftarr[ptr1]<=rightarr[ptr2]){
            v[ptr3++]=leftarr[ptr1];
            ptr1++;
        }else{
            v[ptr3++]=rightarr[ptr2];
            ptr2++;
        }
    }
    while(ptr1<sz1)v[ptr3++]=leftarr[ptr1++];
    while(ptr2<sz2)v[ptr3++]=rightarr[ptr2++];
}

void divide(vector<int>&v, int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        divide(v,left,mid);
        divide(v,mid+1,right);
        conquer(v,left,mid,right);
    }
}

int main(){
    vector<int>v = {5,3,6,99,2,1,34,5};
    divide(v,0,v.size()-1);
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;
}