
#include <bits/stdc++.h>
using namespace std;
#define ll long long

double sumY(vector<double>&y){
   double sumY=0;
 for(int i=1;i<y.size()-1;i++){
    sumY+=y[i];
 }
 return sumY;
}

double trapi(double h,double sumY,vector<double>&y){
  return (h*(y[0]+2*sumY+y[y.size()-1]))/2.0;
}

double sim3(double h,double sumOY,double sumEY,vector<double>&y){
  return (h*(y[0]+4*sumOY+2*sumEY+y[y.size()-1]))/3.0;
}

double sim8(double h,double sumY2,double sumY22,vector<double>&y){
  return (3*h*(y[0]+3*sumY2+2*sumY22+y[y.size()-1]))/8.0;
}

int main(){
 vector<double>x={0.0,1.0,2.0,3.0,4.0};
 vector<double>y={2.0,7.0,12.0,10.0,5.0};

 vector<double>x1={-4,-2,0,2,4,6,8};
 vector<double>y1={1,3,4,4,6,9,14};

 double h=(x[1]-x[0]);
 double h1=x1[1]-x1[0];

 double sumEY=0;
 for(int i=2;i<y.size()-1;i++){
    if(i%2==0)sumEY+=y[i];
 }
 double sumOY=sumY(y)-sumEY;

  double sumEY1=0;
 for(int i=2;i<y1.size()-1;i++){
    if(i%2==0)sumEY1+=y1[i];
 }
 double sumOY1=sumY(y1)-sumEY1;

   double sumY2=0;
 for(int i=1;i<y.size()-1;i++){
    if(i%3!=0)sumY2+=y[i];
 }
 double sumY22=0;
  for(int i=1;i<y.size()-1;i++){
    if(i%3==0)sumY22+=y[i];
 }

   double sumY2p=0;
 for(int i=1;i<y1.size()-1;i++){
    if(i%3!=0)sumY2p+=y1[i];
 }
 double sumY22p=0;
  for(int i=1;i<y1.size()-1;i++){
    if(i%3==0)sumY22p+=y1[i];
 }

 cout<<trapi(h,sumY(y),y)<<endl;
 cout<<trapi(h1,sumY(y1),y1)<<endl;
 cout<<sim3(h,sumOY,sumEY,y)<<endl;
 cout<<sim3(h1,sumOY1,sumEY1,y1)<<endl;
 cout<<sim3(h,sumY2,sumY22,y)<<endl;
 cout<<sim3(h1,sumY2p,sumY22p,y1)<<endl;
}
