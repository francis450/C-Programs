#include <iostream>
using namespace std;
class integer{
    int m,n;
public:
    integer(int ,int);
    void display(void)
    {
        cout<<"m= "<<m<<endl;
        cout<<"n= "<<n<<endl;
    }
};
integer ::integer(int x,int y)
{
    m=x;
    n=y;
}
int main()
{
    integer int1(0,100);//implicit call
    integer int2 = integer(25,75);
    cout<<"\nobject1"<< endl;
    int1.display();
    cout<<"\nobject2"<<endl;
    int2.display();
    return 0;
}
