#include <iostream>
using namespace std;
inline double cube(double a)
    {
        return(a*a*a);
    }
int main()
{
    //inline functions
    int d = cube(2.5+1.5);
    cout<<d<<endl;
    cout<<cube(3.0)<<endl;
    return 0;
}

