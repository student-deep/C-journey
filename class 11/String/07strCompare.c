#include <stdio.h>
#include <string.h>

int main()
{
    char str1[5], str2[10], finalStr[15];
    printf("\nEnter 1st str: ");
    gets(str1);

    printf("\nEnter 2nd str: ");
    gets(str2);
    if (strcmp(str1, str2) == 0)
        printf("Identical");
    else
        printf("Not identical");
    return 0;
}