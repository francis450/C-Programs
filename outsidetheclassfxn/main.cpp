#include <iostream>
using namespace std;

class item{
    int number;
    double price;
public:
    void getdata(int a,double b);
    void putdata(void);
};
void item :: getdata(int a, double b){
    number = a;
    price =b;
}
void item :: putdata(void){
    cout<<"number: "<<number<<endl;
    cout<<"price: "<<price<<endl;
}
int main(){
    item d;
    cout<<"object d:"<<endl;
    d.getdata(493,90.22);
    d.putdata();
    return 0;
}
