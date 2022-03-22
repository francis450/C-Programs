#include <stdio.h>

int main()
{
    int i,j,n,m;
    int choice,num,num1;
    printf("please enter the number of rows and columns of the array:\n");
    scanf("%d %d",&n, &m);
    int arr[n][m];
    printf("Enter %d values:\n",n*m);
    //enter values
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //traverse
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                if(i==n-1 && j==m-1){
                    printf("%d",arr[i][j]);
                }else{
                    printf("%d ,",arr[i][j]);
                }
        }
    }
    //add items
    printf("\nChoose btwn deleting an entire row or column:\n1.Row\n2.Column\nChoice: ");
    scanf("%d",&choice);
    if(choice == 1){
        printf("choose row number to delete: ");
        scanf("%d",&num);
        num--;
    }else{
        printf("Choose column number to delete: ");
        scanf("%d",&num1);
        num1--;
    }
    for(i=0;i<n;i++){
            if(num == 1){continue;}
        for(j=0;j<m;j++){
                if(num1 == j){continue;}
                if(i==n-1 && j==m-1){
                    printf("%d",arr[i][j]);
                }else{
                    printf("%d ,",arr[i][j]);
                }
            }
    }
    return 0;
}
