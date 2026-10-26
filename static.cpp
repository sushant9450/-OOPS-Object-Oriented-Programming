#include <bits/stdc++.h>
using namespace std;
// Important Basic Code
class Example
{
    static int count;
public:
    Example(){
        count++;
        cout<<"The number of object created = "<<count<<endl;
    }
    ~Example(){    //user defined or explicit 
   
        cout<<"The number of object deleted = "<<count<<endl;
         count--;
    }
};
int Example::count;
int main() {
Example E1,E2,E3;
    

    return 0;
}