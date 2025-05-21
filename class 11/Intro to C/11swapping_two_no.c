#include <stdio.h>
int main()
{
    // using a temp / 3rd var
    int a = 2, b = 5, temp;
    temp = a; // temp = 2
    a = b;    // a = 5
    b = temp; // b = 2
    printf("\na = %d", a);
    printf("\nb = %d", b);

    // without using a temp / 3rd var
    int x = 10, y = 15;
    x = x + y; // x = 25
    y = x - y; // y = 25 - 15 => y =  10
    x = x - y; // x = 25 - 10 => x =  15

    printf("\nx = %d", x);
    printf("\ny = %d", y);
    return 0;
}