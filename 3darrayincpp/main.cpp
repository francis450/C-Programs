#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    int arr[3][2][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                for(k=0;k<4;k++){
                    cout<<" "<<arr[i][j][k];
                }
                cout<<"\n";
            }
            cout<<"\n";
    }
    return 0;
}
