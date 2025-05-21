#include <stdio.h>
int main()
{
    int a = 2, b = 3, x = 0;
    int p = 2, q = 3, y = 0;
    x = (++a, b += a);
    y = (p++, q += p);
    printf("\nx = %d", x); // 6
    printf("\ny = %d", y); // 6

    return 0;
}