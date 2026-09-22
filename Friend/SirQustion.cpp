#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;
public:
   void geta(int);
   void showa();
   friend class S;

};
class B
{
    int b;
public:
   void getb(int);
   void showb();
    friend class S;
};
class S
{
  int Sum;
public:
  
   void getS(A,B);
   //friend class A;
   //friend class B;
   void showS();
   void display();
};

void A::geta(int x)
{
          a=x;
}
void B::getb(int y)
{
          b=y;
}
void A::showa()
{
    cout<<a<<endl;
}
void B::showb()
{
   cout<<b<<endl;
}

void S::getS(A objA,B objB)
{
    Sum=objA.a+objB.b;
}
void S::showS()
{
    cout<<"sum = "<<Sum<<endl;
}


int main() {
    A objA;
    B objB;
    S objS;

    objA.geta(10);
    objB.getb(20);
    objS.getS(objA,objB);
      
    objA.showa();
    objB.showb();
    objS.showS();
    return 0;
}