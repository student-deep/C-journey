#include <stdio.h>
int main()
{
    char str1[5], str2[10], finalStr[15];
    printf("\nEnter 1st str: ");
    gets(str1);

    printf("\nEnter 2nd str: ");
    gets(str2);

    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        finalStr[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        finalStr[j] = str2[i];
        i++;
        j++;
    }
    finalStr[j] = '\0';
    puts(finalStr);
    return 0;
}