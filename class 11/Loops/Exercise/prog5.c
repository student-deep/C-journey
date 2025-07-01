/*
cal pow(x,n)/ x^n
*/
#include <stdio.h>
int main()
{
    int x = 2, n = 3;
    long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    printf("\n%ld", result);
    return 0;
};