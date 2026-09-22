#include <bits/stdc++.h>
using namespace std;

void sum();
int sum(int, int);
float sum(int, int, float);

int main() {
    int a, b, r1;
    float c, r2;

    cout<<"\nsum function without parameters:";

    // cout << "Enter the numbers: ";
    // cin >> a >> b >> c;

    sum();   // First function call
    cout<<"\nsum function with 2 parameters:";
      cout << "Enter the two numbers: ";
    cin >> a >> b;

    r1 = sum(a, b);
    cout << "\nThe sum is: " << r1 << endl;

    cout<<"\nsum function with 3 parameters:";
     cout << "Enter the three numbers: ";
    r2 = sum(a, b, c);
    cout << "The sum is: " << r2 << endl;

    return 0;
}

void sum() {
    int x, y, s;

    cout << "Enter the numbers: ";
    cin >> x >> y;

    s = x + y;

    cout << "The sum is: " << s << endl;
}

int sum(int x, int y) {
    return x + y;
}

float sum(int x, int y, float z) {
    return x + y + z;
}