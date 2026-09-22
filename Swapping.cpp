#include <bits/stdc++.h>
using namespace std;

class Example{
    int a;
    public:
    void geta(int);
    void badlo(Example,Example);
     void toprinta();
};
void Example::geta(int a1){
    a=a1;
}
void Example::badlo(Example A,Example B){
    swap(A.a,B.a);
    
    cout << "After swapping inside function:" << endl;
    cout << "A = " << A.a << endl;
    cout << "B = " << B.a << endl;
}

void Example::toprinta() {
  cout << a << endl;
}

int main() {

Example E1,E2;
E1.geta(11);
E2.geta(22);

E1.badlo(E1,E2);//badlo wala call kiya hai yh

 cout << "Original values:" << endl;
    cout << "E1 = ";
     E1.toprinta();
    cout << "E2 = ";
    E2.toprinta();

    return 0;

}