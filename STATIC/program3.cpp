#include <bits/stdc++.h>
using namespace std;
class Example
{
    int a;
    static int n;
public:
   void geta();
  void display();
  static void show();
};

int Example::n;
void Example::geta(int x)
{
    a=x;
}
void Example::display()
{
    cout<<"\n";
    cout<<a<<endl;
    cout<<"\n";
    cout<<n<<endl;
}
void Example::show()
{
    cout<<"iNSIDE CLASS MEMBERFUNCTION"<<endl;
    cout<n<<endl;

}
int main(){
    Example E1;
    E1.geta(27);

}

















void Example::geta(int x)
{
    a=x;
}
void Example::display()
{
   cout<<a;
}
int main() {
    Example E1;
    E1.geta(12);
    Example::display();


    

    return 0;
}