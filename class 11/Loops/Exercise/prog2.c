/*
given m and n print odd and even num between them
*/
#include <stdio.h>
int main()
{
    int m=5,n=10;
    for (int i = m; i <= n; i++)
    {
        if (i%2==0)
        {
            printf("\n %d is even",i);
        }
        else
        {
            printf("\n %d is odd",i);
        }
        
    }
    
    return 0;
}