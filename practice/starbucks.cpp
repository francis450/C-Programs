#include <iostream>
using namespace std;
int n = 3;
int choice;
string menu[3] = {"1. Beverages", "2. Dessert","3. Main dishes"};
string beverages[4] = {"1. Tea","2. Mango juice","3. Coffee","4. Hot Chocolate"};
string dessert[3] = {"1. Ice cream","2. Cotton Candy","3. Pineapple"};
string maindish[3] = {"1. Rice Ndengu","2. Ugali Fish","3. Chips Kuku"};
int choices(int i)
{
    switch(i)
    {
    case 1:
        cout<<"Drinks Available: "<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<beverages[i]<<endl;
        }
        break;
    case 2:
        cout<<"Desserts available: "<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<dessert[i]<<endl;
        }
        break;
    case 3:
        cout<<"Our best dishes: "<<endl;
        for(int i=0;i<3;i++){
            cout<<maindish[i]<<endl;
        }
        break;
    default:
        cout<<"Invalid entry";
    }
}

int main()
{
    for(int i=0;i<n;i++)
    {
        cout<<menu[i]<<endl;
    }
    cout<<"Please choose from the Menu above: ";
    cin>>choice;
    choices(choice);
    return 0;
}
