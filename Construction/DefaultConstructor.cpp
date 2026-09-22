#include <bits/stdc++.h>
using namespace std;

class Example
{
    int a,b,c,d,e;
public:
      Example();
      void show();
};
 Example::Example()
 {
    a=10;
    b=20;
    c=a+b;
    d=a/b;
    e=a*b;
 };
 void Example::show()
 {
   cout<<a<<" "<<b<<endl;
   cout<<"Sum ="<<c<<endl;
   cout<<"division ="<<d<<endl;
  cout<<"multiplication ="<<e<<endl;
 };
 

int main() {
Example S;
S.show();
    return 0;
}