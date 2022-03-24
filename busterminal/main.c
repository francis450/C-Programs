#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nop,rem,mt;
    printf("Enter the number of passengers: ");
    scanf("%d",&nop);
    while(nop>50){
        rem = nop%50;
        nop = nop-50;
    }
    mt = 50-rem;
    printf("Number of passengers in the last bus: %d",rem);
    printf("\nNumber of empty seats in the last bus: %d",mt);
    return 0;
}
