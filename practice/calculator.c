#include <stdio.h>
int main()
{
    float unit = 0.054;
    int count = 0;
    float price;
    float entry;
    printf("Cash: ");
    scanf("%f",&entry);
    price = unit * entry;
    printf("%f power units: ",price);
    return 0;

}
