#include <stdio.h>
int main()
{
    int a, b;
    printf("\n enter two four digit numbers: ");
    scanf("%2d %4d", &a, &b);// 1234 5678
    printf("\na = %d", a); // 12
    printf("\nb = %d", b);// 34
    return 0;
}