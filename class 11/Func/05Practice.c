/*
given m and n print prime numbers btw m & n
[func isPrime takes num as param and return
true for prime & fslse for composite]
*/

/*
decimal to binary
*/
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
void decimalToBinary(int d)
{
    int ans = 0, fAns = 0, copy = d;
    // divide
    while (d != 0)
    {
        ans = (ans * 10) + d % 2;
        d /= 2;
    }

    // reverse
    while (ans != 0)
    {
        fAns = (fAns * 10) + ans % 10;
        ans /= 10;
    }
    printf("\n%d in binary is = %d", copy, fAns);
}
int main()
{
    // Check Prime or Composite
    int m = 5, n = 15;
    for (int i = m; i <= n; i++)
    {
        // bool ans = isPrime(i);
        // if (ans) // ans = true
        //     printf("\n%d is Prime", i);
        // else
        //     printf("\n%d is Composite", i);
        if (isPrime(i))
            printf("\n%d is Prime", i);
        else
            printf("\n%d is Composite", i);
    }

    // decimal to binary
    decimalToBinary(9);
    decimalToBinary(7);
    decimalToBinary(15);
    decimalToBinary(2);
    decimalToBinary(0);
    decimalToBinary(1);
    decimalToBinary(3);
    decimalToBinary(13);
    return 0;
}