#include <bits/stdc++.h>
using namespace std;

namespace first{
    int a=10;
}
namespace second{
    double a=10.5;
}
 /**********/
namespace start {
    void diaplay(){
        cout<<"i am in display function of start namespace"<<endl;;
    }
}

namespace top{
    double b=5;
    void display(){
        cout<<"i am top"<<endl;
    }
}
/************/
namespace bot{
    int b=4;
    void display(){
        cout<<"i am bot"<<endl;
    }
}

/*************/
void display(){
    cout<<"Main"<<endl;
}

/**********/
//Renaming of namespace
namespace verylongnamespace{
    int a=22;
}
namespace VLN=verylongnamespace;  


/************/
 namespace SSSS{
    int x=55;
}
using namespace SSSS;



int main() {
string a="c++";
cout<<a<<endl;
    
cout<<first::a<<endl;
cout<<second::a<<endl;
start::diaplay();
cout<<top::b<<endl;
bot::display();
cout<<bot::b<<endl;


string b="CSE-36";
display();
cout<<b<<endl;


//Renaming wala;
cout<<VLN::a<<endl;

cout<<x<<endl;  // SSSS wala ab bina namespcae likhe use ho gya   55

    return 0;
}