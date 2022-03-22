#include <iostream>
using namespace std;

class item{
    int number;
    double price;
public:
    void getdata(int a, double b);
    void putdata(void){
        cout<<number<<endl;
        cout<<price<<endl;
    }
};
void item ::getdata(int a,double b){
    number = a;
    price = b;
}

int main()
{
    item x;
    cout<<"\nobject x"<<endl;
    x.getdata(100,80.2);
    x.putdata();
    item y;
    cout<<"object y:"<<endl;
    y.getdata(398,89.289);
    y.putdata();
    return 0;
}
