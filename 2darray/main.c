#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int arr[2][3][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
                for(k=0;k<4;k++){
                    printf("%d ",arr[i][j][k]);
                }
        }
        printf("\n");
    }
    return 0;
}
