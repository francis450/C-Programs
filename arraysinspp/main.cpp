#include <iostream>
using namespace std;

int main()
{
    int value,i,n=5;
    int arr[n] = {1,2,3,4};
    printf("Enter a value: ");
    cin >> value;
    for(i=0;i<n;i++){
        if(arr[i] == 0){
            arr[i] = value;
        }
    }
    for(i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    int pos;
    cout<<"\nEnter position at which to delete an item: ";
    cin>>pos;
    pos--;
    for(i=pos;i<=n-1;i++){
        arr[i] = arr[i+1];
    }
    //n--;
    for(i=0;i<n-1;i++){
        cout<<" "<<arr[i];
    }

    return 0;
}
