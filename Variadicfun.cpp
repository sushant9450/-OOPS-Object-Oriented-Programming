#include <bits/stdc++.h>
#include <cstdarg>
using namespace std;

void display(int size, ...)
{
    int n;
    int sum = 0;

    va_list args;   // argument list

    va_start(args, size);

    cout << "Arguments are:" << endl;

    for (int i = 0; i < size; i++)
    {
        // Next argument ko int ke form mein 
        n = va_arg(args, int);

        // Purane code ki tarah argument print karo
        cout << n << endl;

        // Saath mein sum bhi calculate karo
        sum = sum + n;
    }

    va_end(args);

   
    cout << "Sum = " << sum << endl;
}

int main()
{
    // size = 5
    display(5, 10, 20, 30, 40, 50);

    cout << endl;

    // size = 3
    display(3, 100, 200.0, 300);   /// float leye liya to uske bad wla bhi garbage aye ga 

    return 0;
}