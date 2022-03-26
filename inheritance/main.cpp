#include <iostream>
using namespace std;

class worker{
public:
    int age;
    char name[10];
public:
    void get();
    void show();
};
void worker :: get()
{
    cout<<"Your name please: ";
    cin>>name;
    cout<<"Your age please: ";
    cin>>age;
}
void worker :: show(){
    cout<<"\nMy name is "<<name<<"\nI am "<<age<<" years old"<<endl;
}
class manager : public worker
{
    int now;
public:
    void get();
    void show();
};
void manager :: get()
{
    worker :: get();//calling the base class input fxn
    cout<<"Number of worker under you: ";
    cin>>now;
    //cin>>name>>age;
}
void manager :: show()
{
    worker :: show();//calling of base class o/p fn.
    cout<<"\nNo. of workers under me are: "<<now;
}
class ceo : public manager
{
    int nom;
public:
    void get();
    void show();
};
void ceo :: get()
{
    manager :: get();
    cout<<"No. of managers under you: ";
    cin>>nom;
}
void ceo :: show()
{
    cout<<"\nNo of managers under "<<name<<": "<<nom<<endl;
}
int main()
{
    //clrsr();
    worker w1;
    w1.get();
    w1.show();
    manager m1;
    m1.get();
    m1.show();
    ceo ceo1;
    ceo1.get();
    ceo1.show();
    return 0;
}
