//Class ke andar construction ko degin krna inline constuctor hota hai
#include <bits/stdc++.h>
using namespace std;

class Example
{
    int a,b;
public:
    Example(int x,int y){    // INLINE CONSTRUCTOR
        a=x;
        b=y;
    }  
    void display();
};

void Example::display()
{
    cout<<a<<" "<<b<<endl;
    //  cout<<a+b<<endl;
  
};

int main() {

    //Explict calling
    Example E1=Example(100,200);
    E1.display();

    //implicit calling
    Example E2(60,90);
    E2.display();


    return 0;
}