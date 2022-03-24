#include <iostream>

using namespace std;
class sum
{
private:
    int a;
    int b;
    int c;
    float d;
    double e;
public:
    sum()
    {
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin b;
        cout<<"sum="<<a+b<<endl;
    }
    sum (int a, int b);
    sum(int a,float d,double c);
    sum::sum(int x,int y)
    {
        a=x;
        b=y;
    }
    sum::sum(int p,float q,double r)
    {
        a=q;
        d=p;
        e=r;
    }
};
int main()
{
    sum 1;
    sum m = sum(10,50);
    sum n = sum(3,3.2,4.55);
    getch();
    return 0;
}
