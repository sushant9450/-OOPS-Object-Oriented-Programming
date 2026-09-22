#include <bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

class Example{
    int a;
    public:
    void geta(int);
    int sum(Example,Example);
    
};
void Example::geta(int a1){
    a=a1;
}
int Example::sum(Example A,Example B){
    int S=A.a+B.a;
    return S;
}

int main() {
    Example E1,E2,E3;
    E1.geta(10);
    E2.geta(20);
    int r=E3.sum(E1,E2);
    cout<<r<<endl;
    return 0;
}

// class Example {
//     int a, b;
// public:
//     void geta(int, int);
//     int sum(Example, Example);
// };
// void Example::geta(int a1, int b1) {
//     a = a1;
//     b = b1;
// }
// int Example::sum(Example A, Example B) {
//     int S = A.a + A.b + B.a + B.b;
//     return S;
// }
// int main() {
//     Example E1, E2, E3;
//     E1.geta(10, 20);   
//     E2.geta(30, 40);   
//     int r = E3.sum(E1, E2);
//     cout << r << endl;
//     return 0;
// }






