#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;


vector<int> randomarr(){
    vector<int>v;
    int n = 10000;
    for(int i=0; i<n; i++){
        int num = rand();
        num = num%n;
        v.push_back(num);
    }
    return v;
}


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

void insertionsort(vector<int>&v){
    int n = v.size();
    for(int i=1; i<n; i++){
        int curr=v[i];
        int ptr=i;
        while(curr<v[ptr-1] && ptr>0){
            swap(v[ptr],v[ptr-1]);
            ptr--;
        }
    }
}

void countingsort(vector<int>&v){
    int mx=-1;
    for(auto it: v) mx=max(mx,it);
    vector<int>arr(mx+1,0);
    for(auto it: v)arr[it]++;
    v.clear();
    for(int i=0; i<=mx; i++){
        for(int j=0; j<arr[i]; j++){
            v.push_back(i);
        }
    }
}

int main(){
    srand(time(0));
    vector<int>v = randomarr();
    vector<int>v1=v, v2 =v;

    auto start = high_resolution_clock::now();
    divide(v,0,v.size()-1);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout<<duration.count()<<endl;

    auto start1 = high_resolution_clock::now();
    insertionsort(v1);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
    cout<<duration1.count()<<endl;

    auto start2 = high_resolution_clock::now();
    countingsort(v2);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(stop2 - start2);
    cout<<duration2.count()<<endl;

    // for(auto it: v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}