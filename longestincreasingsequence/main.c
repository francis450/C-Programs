#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr[10] = {0,32,1,3,13,53,42,45,21,45};
    int cache[10];
    cache[0] = 1;

    for(i = 0; i < 10; i++)
    {
        for(j = 0;j < i;j++)
        {
            if(arr[cache[i]] > arr[cache[j]])
            {
                cache[i] = cache[j] + 1;
            }
        }
    }

    for(i = 0;i<10;i++)
    {
        printf("%d ",cache[i]);
    }

    return 0;
}
