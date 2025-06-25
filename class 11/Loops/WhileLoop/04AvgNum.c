/*
calculate the avg of numbers
1,3,5,4,-1 =>
1. 1+3+5+4 = 13
2. 13 / 4 = float
*/
#include <stdio.h>
int main()
{
    int num, sum = 0, count = 0;
    float avg = 0.0;
    printf("\nEnter number (-1 to stop): ");
    scanf("%d", &num);
    while (num != -1)
    {
        sum += num;
        count++;
        printf("\nEnter number (-1 to stop): ");
        scanf("%d", &num);
    }
    avg = (float)sum / count;
    printf("\n Avg =%.2f", avg);
    return 0;
}