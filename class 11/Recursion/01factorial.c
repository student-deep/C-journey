#include <stdio.h>

int fact(int num)
{
    // base case
    if (num == 1 || num == 0)
    {
        return 1;
    }
    // recursion
    return num * fact(num - 1);
}

int main()
{
    int n = 5;
    printf("Factorial of %d is =  %d", n, fact(n));
    return 0;
}