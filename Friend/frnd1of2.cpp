#include <bits/stdc++.h>
using namespace std;

// ek class ko dusri ka frienf=d banaya
class B;

class A
{
 public:
    void display(B);
};

class B
{
    int b;
public:
     void getb(int); // to initialize data member b
     friend void A::display(B); // it will be defined as member function
};

void B::getb(int y)
{
    b=y;
}

void A::display(B B1)    // it is defined as member function
{
    cout<<B1.b;
}

int main() {
    B obj1;
    obj1.getb(10);
    A obj2;
    obj2.display(obj1);

    return 0;
}