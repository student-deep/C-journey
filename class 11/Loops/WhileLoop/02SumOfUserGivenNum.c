/*
1, 5, 2, -1 => 1+5+2=8
*/

#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("\nEnter number (-1 to stop): ");
    scanf("%d", &num);
    while (num != -1)
    {
        sum += num;
        printf("\nEnter number (-1 to stop): ");
        scanf("%d", &num);
    }
    printf("\nSum of numbers = %d", sum);
    return 0;
}