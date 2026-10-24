#include <bits/stdc++.h>
using namespace std;
class Example
{
    public:
    Example();
    ~Example();

};
Example::Example(){
    cout<<"Constructor Called"<<endl;
    
}
Example::~Example(){       //user defined or explicit 
    cout<<"Destructor called"<<endl;
    
}
int main() {
Example E1,E2,E3;
    return 0;
}