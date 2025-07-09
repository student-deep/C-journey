#include <stdio.h>

void multiply(int *n1, int *n2) // n1 and n2 are address
{
    printf("\n%d", (*n1) * (*n2));
    *n1 = 1000;
    *n2 = 2000;
}

int main()
{
    int a = 2, b = 5;
    multiply(&a, &b); // call by reference => address of a and b
    printf("\na = %d", a);
    printf("\nb = %d", b);
    return 0;
}

/*
n1 * n2 = pointer * pointer ❌
Dereference => give me the value at address 
*(n1) * *(n2) / *n1 * *n2 / (*n1) * (*n2)
*/