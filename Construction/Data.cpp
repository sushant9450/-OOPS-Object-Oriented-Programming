#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    string name;
    static int count;
public:
    Student(int,string);
    void display();
    static void show();
};

Student::Student(int r,string n)
{
   roll=r;
   name=n;
   count++;
}

void Student::display()
{
    cout<<roll<<" "<<name<<endl;
}

int Student::count;
void Student::show(){
    cout<<count;
}

int main() {
 Student S1(2,"Sushant");
 S1.display();
 
 Student S2=Student(5,"Singh");
 S2.display();
 Student::show();

    return 0;
}