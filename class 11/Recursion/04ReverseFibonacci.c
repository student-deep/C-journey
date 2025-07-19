#include <stdio.h>
#include"customLib.h"
int main()
{
    int n;
    printf("\n enter number of terms: ");
    scanf("%d", &n);
    for (int i =n-1; i >= 0; i--)
    {
        printf("\t%d", fibo(i));
    }
    return 0;
}