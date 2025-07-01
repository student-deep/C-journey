/*
A
A B
A B C
A B C D

hint : line number = number of letters in that line

A = 65
B = 66

*/
#include <stdio.h>
int main()
{
    int lines = 5;
    for (int i = 65; i < lines + 65; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c\t", j);
            // count++;
        }
        printf("\n\n");
    }

    return 0;
}