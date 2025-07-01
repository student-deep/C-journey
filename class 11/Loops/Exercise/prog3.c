/*
factorial
*/
#include <stdio.h>
int main()
{
    int fact = 1, n = 0;
    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    printf("\n Factorial of %d = %d", n, fact);

    return 0;
}