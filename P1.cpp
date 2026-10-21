#include <bits/stdc++.h>
using namespace std;

class Example
{
    public:
    Example()
    {
        cout<<"Constructor call"<<endl;
    }
    ~Example()     //user defined or explicit 
    {
        cout<<"Destructor call"<<endl;
    }
};
int main() {

    Example E1;
    

    return 0;
}