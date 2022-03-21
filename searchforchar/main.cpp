#include <iostream>

using namespace std;

int main()
{
    char charr;
    cout<<"Enter a character: ";
    cin>>charr;
    if(charr >= 'a' && charr <= 'z' || charr >= 'A' && charr <= 'Z' )
    {
        cout<<"Its a character";
    }else{
        cout<<"Its not";
    }
    return 0;
}
