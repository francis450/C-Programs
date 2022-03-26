#include <stdio.h>

int main()
{
    int i,j,n=6;
    int nums[6] = {1,1,2,2,3,4};
    for(i=0;i<n;i++){
        for(j=6;j>i;j--){
            if(i!=j){
                if(nums[i] == nums[j]){
                }else{
                    printf("%d",nums[i]);
                }
            }
        }
    }
    return 0;0
}
