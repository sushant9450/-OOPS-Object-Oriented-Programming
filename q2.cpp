#include <bits/stdc++.h>
using namespace std;

class B;
class A
{
    int a;
public:
    void geta(int x);
    void showa();
    friend void maximum(A, B);
};

class B
{
    int b;
public:
    void getb(int y);
    void showb();
    friend void maximum(A, B);
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
    cout << "A = " << a << endl;
}

void B::showb()
{
    cout << "B = " << b << endl;
}

void maximum(A A1, B B1)
{
    if(A1.a > B1.b)
        cout << "Maximum is  A = " << A1.a << endl;

    else if(B1.b > A1.a)
        cout << "Maximum is  B= " << B1.b << endl;

    else
        cout << "Both are equal" << endl;
}

int main()
{
    A objA;
    objA.geta(10);
    objA.showa();

    B objB;
    objB.getb(30);
    objB.showb();

    maximum(objA, objB);

    return 0;
}