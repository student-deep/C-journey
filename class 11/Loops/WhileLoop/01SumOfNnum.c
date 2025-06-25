// calculate sum of first n numbers
// n=5 =>1+2+3+4+5=15
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0, copy;
    printf("\nEnter range: ");
    scanf("%d", &n);
    n = abs(n);
    copy = n;
    while (n != 0)
    {
        sum = sum + n; // sum += n
        n--;
    }
    printf("\nSum of first %d numbers = %d", copy, sum);
    return 0;
}