#include <stdio.h>
int main()
{
    int num;
    printf("\n Enter any number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("\nEven");
    else
        printf("\n odd");

    return 0;
}