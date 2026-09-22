#include <bits/stdc++.h>
using namespace std;
//Returning object using friend function

class Example
{
    int a;
public:
   void geta(int);
   friend Example Sum(Example,Example);      //friend    Example    Sum    (Example, Example)
void display(Example);                       //  ↓          ↓        ↓           ↓
                                              //permission return   name      inputs
};

void Example::geta(int x)
{
    a=x;
}
Example Sum(Example E1,Example E2)
{
    Example S;
    S.a=E1.a+E2.a;
    return(S);
};
void Example::display(Example E)
{
    cout<<"Sum ="<<E.a<<endl;
};
int main() {
    Example A,B,C;
    A.geta(10);
    B.geta(20);
    C=Sum(A,B);
    C.display(C);
    return 0;
}