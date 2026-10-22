#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    Example();
    ~Example();     //user defined or explicit 
};

Example::Example()
{
    cout << "constructor invoked" << endl;
}

Example::~Example()
{
    cout << "Destructor invoked" << endl;
}

int main()
{
    Example E1;

    return 0;
}