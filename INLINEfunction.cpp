#include <bits/stdc++.h>
using namespace std;

class Student {
    int r;
    string name;

public:
    void getData();
    inline void display();
};

void Student::getData() {
    cin >> r >> name;
    
}

inline void Student::display() {
    cout << "Roll No: " << r << endl;
    cout << "Name: " << name << endl;
}

int main() {
    Student S;

    S.getData();
    S.display();

    return 0;
}