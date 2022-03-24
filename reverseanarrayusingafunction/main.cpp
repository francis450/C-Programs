#include <iostream>
using namespace std;

int i;
int arr[5];
void reversal()
{
    int i;
    cout<<"\nreversal: ";
    for(i=4;i>=0;i--){
        cout<<" "<<arr[i];
    }
}
int main()
{
    cout<<"Enter 5 values: ";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Output: ";
    for(i=0;i<5;i++){
        cout<<" "<<arr[i];
    }
    reversal();
    return 0;
}
