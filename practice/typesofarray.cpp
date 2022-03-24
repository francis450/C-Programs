#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char twodim[2][3] = {'a','d','r','g','y','j'};
    int threedim[2][3][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    int i,j,k;

    //print one dimensional array
    cout<<"One dimensional array"<<endl;
    for(i = 0; i < 5;i++)
    {
        printf("%d ",arr[i]);
    }

    //print two dimensional array
    cout<<"\nTwo dimensional array"<<endl;
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < 3; j++)
        {
            cout<<" "<<twodim[i][j];
        }
        cout<<"\n";
    }

    //print Three dimensional array
    cout<<"\nThree dimensional array"<<endl;
    for(i = 0;i < 2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<4;k++)
            {
                cout<<" "<<threedim[i][j][k];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
