#include <bits/stdc++.h>
using namespace std;
int Sum(int ,int );// function declaration
// int Sum(int x,int y){
//     int S;
//     S=x+y;
//     return S;
int main() {
int a,b,r;
cout<<"Enter the value of a and b:"<<endl;
cin>>a>>b;
r=Sum(a,b);
cout<<r<<endl;
}
int Sum(int x,int y){
   int S;
    S=x+y;
    return S;
}
 
