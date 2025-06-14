/*
n1=2,n2=1,n3=8
    n1>n2
        n1>n3=>n1
        else n3
    else
        n2>n3=>n2
        else n3
*/

#include <stdio.h>
int main()
{
    int num1 = 4, num2 = 4, num3 = 3;
    if (num1 > num2)
    {
        if (num1 > num3)
            printf("\n %d", num1);
        else if (num1 == num3)
        {
            printf("\n %d", num1);
        }
        else
            printf("\n %d", num3);
    }
    else if (num1 < num2)
    {
        if (num2 > num3)
            printf("\n %d", num2);
        else if (num2 == num3)
        {
            printf("\n %d", num2);
        }

        else
            printf("\n %d", num3);
    }
    else // num1==num2
    {
        if (num1 > num3)
            printf("%d", num1);
        else if (num1 == num3)
            printf("%d", num1);
        else // num3>num1
            printf("%d", num3);
    }
    return 0;
}