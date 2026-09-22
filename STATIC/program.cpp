#include <bits/stdc++.h>
using namespace std;

class Example
{

    static int n;   //private me hai

public:
   static void display();
};

int Example::n=10;
void Example::display()
{
    cout<<n;
}

int main() {

Example::display();
    return 0;
}