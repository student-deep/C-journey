// calculate sum of first n numbers
// n=5 =>1+2+3+4+5=15

/*
n = 5
copy = 5

i=5 => i>=0(T) => sum = 0+5; i = 4
i=4 => i>=0(T) => sum = 5+4=9; i = 3
i=3 => i>=0(T) => sum = 9+3=12;i = 2
i=2 => i>=0(T) => sum = 12+2=14;i = 1
i=1 => i>=0(T) => sum = 14+1=15;i = 0


*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0, copy;
    printf("\nEnter range: ");
    scanf("%d", &n);
    n = abs(n);
    copy = n;
    for (int i = n; i >= 0; i--)
    {
        sum += i;
    }

    printf("\nSum of first %d numbers = %d", copy, sum);
    return 0;
}