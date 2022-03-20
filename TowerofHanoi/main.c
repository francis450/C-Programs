#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void TowerOfHanoi(int n, char fromTower[], char toTower[] , char auxTower[]  )
{
    if(n == 1)
    {
        printf("Move disk 1 from rod %s to rod %s\n",fromTower,toTower);
        return;
    }
    TowerOfHanoi(n-1, fromTower, auxTower, toTower);
    printf("Move disk %d from rod %s to rod %s\n",n,fromTower,toTower);
    TowerOfHanoi(n-1, auxTower, toTower, fromTower);
}

int main()
{
    int n = 2;
    TowerOfHanoi(n, "Start", "End", "Mid");
    return 0;
}
