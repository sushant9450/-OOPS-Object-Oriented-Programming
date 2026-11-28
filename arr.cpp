#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    Student(){
        cout<<"Object created"<<endl;
    }
};
int main() {
Student *ptr=new Student[3];
delete []ptr;
    
return 0;
}