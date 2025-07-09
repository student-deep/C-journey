#include <stdio.h>

void sum(int num1, int num2) // parameterized  + non-return type func
{
    printf("\nSum is = %d", num1 + num2);
}
int sum2(int num1, int num2) // parameterized + return type func
{
    return num1 + num2;
}

void sum3() // non-parameterized + non-return type
{
    printf("\nSum3");
}
char sum4() // non-parameterized + return type
{
    return 'A';
}

int main()
{
    int a = 5, b = 2;
    sum(a, b); // argument => a,b
    int ans = sum2(a, b);
    printf("\nSum is = %d", ans);
    sum3();
    printf("\nChar is = %c", sum4());
    return 0;
}

/*
Sum is = 7
Sum is = 7
Sum3
Char is = A
*/