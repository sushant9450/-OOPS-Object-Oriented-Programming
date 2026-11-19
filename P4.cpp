#include <bits/stdc++.h>
using namespace std;

class Example
{
    int a,b;
public:
  void getdata(int,int);
  void display();
  Example sum(Example, Example); //passing obj as reference
};

void Example::getdata(int x,int y)
{
    a=x;
    b=y;
}
 void Example::display()
 {
    cout<<a<<" "<<b<<endl;
 };

 Example Example::sum(Example E1, Example E2)     // return type bhi example hai and class bhi example hai
{
    Example S;
    S.a = E1.a + E2.a;  // a->(10) and E1.a->(100)
    S.b = E1.b + E2.b;   // b->(20) ans E1.b->(200)
    return S;
}
int main() {
    Example  A,B,C;
    A.getdata(10, 20);
    A.display();
    B.getdata(100, 200);
    B.display();
   
    Example D;
    D=C.sum(A,B);   //B->E1
    D.display();
    

    return 0;
}



//Using CONSTRUCTOR
// #include <bits/stdc++.h>
// using namespace std;

// class Example
// {
//     int a,b;
// public:
 
// Example()   // iske bina kam nhi chale ga
//   {
//   a=0;
//   b=0;
//   }

//   Example (int x,int y)
//   {
//   a=x;
//   b=y;
//   }

// void display() {
//         cout << a << " " << b << endl;
//     }

//     Example sum(Example &E1, Example &E2) {
//         Example S;
//         S.a = E1.a + E2.a;
//         S.b = E1.b + E2.b;
//         return S;
//     }
// };

// int main() {
 
//     Example A(10, 20);
//     A.display();

//     Example B(100, 200);
//     B.display();

//     Example D;
//     Example C;
//     D = C.sum(A, B);
//     D.display();
//   return 0;
// }