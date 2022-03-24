#include <iostream>
#include <conio.h>
using namespace std;
class abc{
private:
    string nm;
public:
    abc()
    {
        cout<<"Enter your name: "<<endl;
        cin>>nm;
    }
    void display()
    {
        cout<<"Your name is "<<nm<<endl;
    }
};
int main()
{
    //clrsrn();
    abc d;
    d.display();
    getch();
    return 0;
}
