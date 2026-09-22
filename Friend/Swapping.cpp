#include <bits/stdc++.h>
using namespace std;

class Test;  // Forward declaration because Example needs Test

class Example {
    int a;

public:
    void geta(int);  // Initialize data member a
    void Adisplay();

    // Friend function can access private members of both classes
    friend void swap(Example&, Test&);
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
    void getb(int);  // Initialize data member b
    void Bdisplay();

    // Friend function can access private members of both classes
    friend void swap(Example&, Test&);
};

void Test::getb(int y) {
    b = y;
}

void Test::Bdisplay() {
    cout << "\nThe value of b: " << b << endl;
}

// Friend function
// & is used so that original objects E1 and T1 are modified
void swap(Example& E, Test& T) {
    int temp = E.a;
    E.a = T.b;
    T.b = temp;
}

int main() {

    Example E1;
    E1.geta(10);
    E1.Adisplay();

    Test T1;
    T1.getb(20);
    T1.Bdisplay();

    // Values swap karenge
    swap(E1, T1);

    cout << "\nAfter swapping:" << endl;

    E1.Adisplay();
    T1.Bdisplay();

    return 0;
}