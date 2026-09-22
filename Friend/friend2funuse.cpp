#include <bits/stdc++.h>
using namespace std;

class Test;  // Test class ko pehle declare kar rahe hain 

class Example {
    int a;

public:
    void geta(int);
    void Adisplay();

   //friend function
    friend int sum(Example, Test);
};

void Example::geta(int x) {
    a = x;
}

void Example::Adisplay() {
    cout << "\nThe value of a: " << a << endl;
}

class Test {
    int b;

public:
    void getb(int);
    void Bdisplay();

     // friend function
    friend int sum(Example, Test);
};

void Test::getb(int y) {
    b = y;
}

void Test::Bdisplay() {
    cout << "\nThe value of b: " << b << endl;
}

// Friend function dono classes ke private members access kar sakta hai
int sum(Example E, Test T) {
    int s = E.a + T.b;
    return s;
}

int main() {
    Example E1;

    E1.geta(10);
    E1.Adisplay();

    Test T1;

    T1.getb(20);
    T1.Bdisplay();

    int res = sum(E1, T1);

    cout << "The sum is " << res << endl;

    return 0;
}