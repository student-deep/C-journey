#include <stdio.h>

int expo(int x, int n)

{
    if (n == 0)
        return 1;
    else
    {
        return x * (expo(x, n - 1));
    }
}
int main()
{
    int x, n;
    printf("\n Enter base and power: ");
    scanf("%d %d", &x, &n);
    printf("\n%d to the power %d is : %d", x, n, expo(x, n));
    return 0;
}
