#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
int th;
vector<int> randomarr(int n){
    vector<int>v;
    for(int i=0; i<n; i++){
        int num = rand();
        num = num%1000;
        v.push_back(num);
    }
    return v;
}
void insertionsort(vector<int>&v, int left, int right){
    int n = right-left+1;
    if(n==1)return;
    for(int i=left+1; i<=right; i++){
        int curr=v[i];
        int ptr=i;
        while(ptr>left && curr<v[ptr-1]){
            swap(v[ptr],v[ptr-1]);
            ptr--;
        }
    }
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
void divide(vector<int>&v, int left, int right, bool &isHybrid){
    if(left<right){
        if(right-left+1<=th && isHybrid){
            insertionsort(v,left,right);
        }
        int mid = (left+right)/2;
        divide(v,left,mid,isHybrid);
        divide(v,mid+1,right,isHybrid);
        conquer(v,left,mid,right);
    }
}
bool threshold(int n){
    int insertionTc = (n*(n+1))/2;
    int mergeTc ;
    int m=n;
    int cnt=0;
    while(m!=1){
        m = (m+1)/2;
        cnt++;
    }
    cnt++;
    mergeTc = n*cnt;
    return (insertionTc<=mergeTc);
}
int main(){
    int th = 0;
    for(int i=1; i<100; i++){
        if(threshold(i)) th = i;
    }
    // cout<<th<<endl;
    th=100;
    vector<int>v = randomarr(1000000);
    vector<int>v2 = v;
    bool isHybrid=false;
    auto start = high_resolution_clock::now();
    divide(v,0,v.size()-1,isHybrid);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout<<"Running time for Merge sort is "<<duration.count()<<endl; 
    isHybrid = true;
    auto start1 = high_resolution_clock::now();
    divide(v2,0,v2.size()-1,isHybrid);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
    cout<<"Running time for Hybrid sort is "<<duration1.count()<<endl;
    cout<<  "Hybrid is faster of " << duration.count() - duration1.count() << endl;
}