#include <bits/stdc++.h>
using namespace std;

class Example
{

    static int n;

public:
    void display();
};

int Example::n=10;  //agr yha nko value n do to  wo 0 dega
void Example::display()
{
    cout<<n;
}

int main() {
    
    Example E1;  //Example.display()   nhi chale ga 
    E1.display();
    return 0;
}