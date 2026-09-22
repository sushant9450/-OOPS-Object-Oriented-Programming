#include <bits/stdc++.h>
using namespace std;

class overload{
         int a,b;

public:
   //void getab(int,int)
    void sum();
    int sum(int,int);
    double sum(int, double);
};


void overload::sum()
{
    cout<<"enter the two values: ";
    cin>>a>>b;
    int s=a+b;
cout<<"the sum is:"<<s<<endl;
}



 int overload::sum(int x,int y){
    a=x;
    b=y;
    return a+b;
 }

    double overload::sum(int x, double y){
    return x+y;
    }


int main() {

    int n1,n2;
    overload O1;
    O1.sum();
    cout<<"Enter the numbers:";
    cin>>n1>>n2;
    int r=O1.sum(n1,n2);
    cout<<"the sum is: "<<r<<endl;

    

    return 0;
}