#include <stdio.h>
int main()
{
    int a = 7;
    char ch = 'a';
    float x = 5.00;
    printf("\nSize of char %d", sizeof(ch)); // 1
    printf("\nSize of int %d", sizeof(a));   // 4
    printf("\nSize of float %d", sizeof(x)); // 4
    return 0;
}