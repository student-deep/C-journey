/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

hint : space print + digit
line number  = no of digits
space = total line - line number
1st line space => 5-1 = 4
2nd line space => 5-2 = 3

*/
#include <stdio.h>
int main()
{
    int lines = 5, count = 1;
    for (int i = 1; i <= lines; i++) // line
    {
        for (int space = lines; space > i; space--)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*
i = 1
    space = 5
    space
    space = 4
    space
    space = 3
    space
    space = 2
    space
    space = 1 ❌
    j = 1
    1
    j = 2 ❌
    o/p :           1
i = 2
    space = 4
    space
    space = 3
    space
    space = 2
    space
    space = 1 ❌
    j = 1
    1
    j = 2
    2
    j = 3 ❌
    o/p  :      1 2 
*/