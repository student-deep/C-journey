/*
multiplication table of n
*/
#include <stdio.h>
int main()
{
    int n=5;
    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d x %d = %d",n,i,n*i);
    }
    
    
    return 0;
}