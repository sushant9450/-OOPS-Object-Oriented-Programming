#include <bits/stdc++.h>
using namespace std;

class Sample
{
    int a,b;
public:
      Sample();    //constructor
      void show();   //member function
};

Sample::Sample()
{
    a=10;
    b=20;
}

void Sample::show()
{
    cout<<a<<" "<<b;
}

int main() {
    Sample S;  //obj banate hi constructor call ho gya  to ab use call krne ki jarut nhi hai ab.
    S.show();
    return 0;
}