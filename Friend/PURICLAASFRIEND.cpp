#include <bits/stdc++.h>
using namespace std;
 //CLASS A IS FRIEND OF CLASS B
// puri class ke member function ko friend banaya
class B;
class A
{
    int a;
public:
    void geta(int);
    friend class B;
};
class B
{
public:
  void display(A); // ye frind function hai lekin declare nhi kiya kyuki puri class hi frind hai iske bad wali line nhi frined hogi wo member function hoga

};

void A::geta(int x)
{
    a=x;
};

void B::display(A A1)    // it is defined as member function even it is a friend function becaue it is also ascting as a member function
{
    cout<<A1.a;
}

int main() {
    A obj1;
    obj1.geta(10);
    B obj2;
    obj2.display(obj1);

    

    return 0;
}