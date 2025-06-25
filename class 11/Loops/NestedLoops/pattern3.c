/*
1
2 3
4 5 6
7 8 9 10

hint : line number = number of digits in that line

*/
#include <stdio.h>
int main()
{
    int lines=5,count=1;
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("%d\t",count);
            count++;
        }
        printf("\n\n");
    }
    
    return 0;
}