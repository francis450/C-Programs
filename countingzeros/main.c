#include <stdio.h>
#include <stdlib.h>

int countzeros(int binary)
{
    int i,count = 0;
    int arr[];
    for(i=0;i < binary%10;i++)
    {
      count ++;
      countzeros(binary/10);

    }
    return count;
}

int main()
{
    int binary;
    printf("Please enter a binary number to determine the longest number of zeros: ");
    scanf("%d", &binary);
    countzeros(binary);
    return 0;
}
