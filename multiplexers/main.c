#include <stdio.h>
#include <stdlib.h>

int output(int a, int b)
{
    if(a > 1 || b > 1){
            printf("Erroneous Binary entries!!\n");
            main();
    }else{
            if(a == 0 && b == 0){
                printf("A is ON");
            }else{
                if(a == 0 && b == 1){
                    printf("B is ON");
                }else{
                    if(a == 1 && b == 0){
                        printf("C is ON");
                    }else{
                        printf("D is ON");
                    }
                }
            }
    }
}

int main()
{
    int a,b;
    printf("Enter select states: ");
    scanf("%d %d",&a,&b);
    output(a,b);
    return 0;
}
