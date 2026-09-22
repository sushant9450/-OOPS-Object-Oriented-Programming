#include <bits/stdc++.h>
using namespace std;

class Example
{
    int a,b,c;
public:
    Example(int,int);   //Parameterised constructor
    void display();
};

Example::Example(int x,int y)
{
    a=x;
    b=y;
    c=x+y;
    
}
void Example::display()
{
    cout<<a<<" "<<b<<endl;
     cout<<a+b<<endl;
  
};

int main() {

    //Explict calling
    Example E1=Example(100,200);
    E1.display();

    //implicit calling
    Example E2(60,90);
    E2.display();

    //COPY CONSTRUCTOR
    Example E3=E1;
    E3.display();

    // Example E3;  THIS IS NOT A COPY CONSTRUCTOR
    // E3=E1;
    

    return 0;
}