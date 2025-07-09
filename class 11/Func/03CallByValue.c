#include <stdio.h>

void multiply(int n1, int n2)
{
    printf("\n%d", n1 * n2);
    n1=1000;
    n2=2000;
}

int main()
{
    int a = 2, b = 5;
    multiply(a, b); // call by value => copy of a and b 
    printf("\na = %d",a);
    printf("\nb = %d",b);
    return 0;
}