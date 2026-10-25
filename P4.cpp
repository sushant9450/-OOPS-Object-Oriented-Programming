#include <bits/stdc++.h>
using namespace std;

class Example
{
    int a, b;   

public:
    Example(int, int);   
    void display();
    ~Example();   //user defined or explicit      
};


Example::Example(int x, int y)
{
    a = x;
    b = y;
}

void Example::display()
{
    cout << a << " " << b << endl;
}


Example::~Example()
{
    cout << "Object delted" << endl;
}

int main()
{
    Example E1(100, 200);

    E1.display();

    return 0;
}