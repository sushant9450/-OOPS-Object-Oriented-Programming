#include <bits/stdc++.h>
using namespace std;
 // Returning object using friend function
class C2;
class C3;

class C1
{
    string name = "Ram";
    int r;

public:
    void getr(int x);
    void showr();
    friend C3 Sum(C1, C2, C3);
};

class C2
{
    string name = "Shyam";
    int p;

public:
    void getp(int x);
    void showp();
    friend C3 Sum(C1, C2, C3);
};

class C3
{
    string name = "Amit";
    int q;

public:
    void getq(int x);
    void showq();
    void display();
    friend C3 Sum(C1, C2, C3);
};

void C1::getr(int x)
{
    r = x;
}

void C1::showr()
{
    cout << "Ram Contribution = " << r << endl;
}

void C2::getp(int x)
{
    p = x;
}

void C2::showp()
{
    cout << "Shyam Contribution = " << p << endl;
}

void C3::getq(int x)
{
    q = x;
}

void C3::showq()
{
    cout << "Amit Contribution = " << q << endl;
}

void C3::display()
{
    cout << "Total Contribution = " << q << endl;
    if(q > 100000)
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

C3 Sum(C1 A, C2 B, C3 C)
{
    C.q = A.r + B.p + C.q;
    return C;
}

int main()
{
    C1 A;
    C2 B;
    C3 C;
    A.getr(40000);
    B.getp(40000);
    C.getq(30000);
    A.showr();
    B.showp();
    C.showq();
    C = Sum(A, B, C);
    C.display();

    return 0;
}