#include <iostream>
using namespace std;

int main()
{
    int maxi = 10;
    int arr[maxi];
    int *pointers[maxi];
    cout<<"Please enter "<<maxi<<" values: \n";
    //take array of values from user
    for(int i = 0;i < maxi;i++)
    {
        cin>>arr[i];
    }
    //assign pointers to values in the existing array
    for(int i=0;i < maxi;i++)
    {
        pointers[i] = &arr[i];
    }
    //check for the smallest value using the pointers
    int mini = *pointers[0];
    for(int i = 0;i < maxi;i++)
    {
        if(*pointers[i] < mini){
            mini = *pointers[i];
        }
    }
    cout<<"Smallest number: "<<mini;
    return 0;
}
