#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;
    printf("\n enter number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", fibo(i));
    }
    // print the 5th term
    printf("\nThe 5th term is : %d", fibo(4));
    return 0;
}