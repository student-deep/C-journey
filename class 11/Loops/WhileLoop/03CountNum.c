/*
wap to read num until -1 is encountered. also count +ve,-ve and 0s 
*/
#include <stdio.h>
int main()
{
    int num,positive=0,negative=0,zero=0;
    printf("\nEnter number (-1 to stop): ");
    scanf("%d", &num);
    while (num!=-1)
    {
        if (num>0)
        {
            positive++;

        }
        else if (num<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        printf("\nEnter number (-1 to stop): ");
        scanf("%d", &num);
    }
    printf("\nNumber of positive numbers %d", positive);
    printf("\nNumber of negative numbers %d", negative);
    printf("\nNumber of zero numbers %d", zero);

        return 0;
}