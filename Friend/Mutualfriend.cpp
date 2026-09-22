#include <bits/stdc++.h>
using namespace std;
// Most important in interview
// class ke data ko member and friend function dono access kar sakte hai 
// Mutualfriendship (dono ek dusre ke friend hai --->dono ek dusre ko data ko access kr sakte ha (agr koi ek  hi kr pa rha to wo mutual nhi hoga )
class B;
class A
{
    int a;
public:
    void geta(int);
    void showa();
    friend class B;  // A class ka friend hai B  (whi honge jisme us class ka object hoga)
   void displayB(B);  //B ke data ko display karega //member function of class B
};
class B
{
    int b;
public:
    void getb(int);
    void showb();
    friend class A;  // B class ka friend hai A
    void displayA(A);  //member function of class A
};


void A::geta(int x)
{
    a=x;
}
void A::showa()
{
    cout<<a<<endl;
}

void B::getb(int y)
{
    b=y;

}

void B::showb()
{
    cout<<b<<endl;
}

void A::displayB(B B1){  // member function of class A && friend function of class B
    cout<<B1.b<<endl;
}
void B::displayA(A A1){   // member function of class B && friend function of class A
    cout<<A1.a<<endl;
}
int main() {
    A X;
    X.geta(10);
    X.showa();
    B Y;
    Y.getb(20);
    Y.showb();

    X.displayB(Y); //B->20
    Y.displayA(X);  //A->10

    return 0;
}