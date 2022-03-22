#include <iostream>
using namespace std;

int main()
{
    int max = 3;
    int var[max] = {10,20,30};
    int *ptr[max];
    for(int i=0;i < max;i++)
    {
        ptr[i] = &var[i];
    }
    for(int i=0;i<max;i++)
    {
        cout<<"Value of var["<<i<<"] = ";
        cout<<ptr[i]<<endl;
    }
    return 0;
}
