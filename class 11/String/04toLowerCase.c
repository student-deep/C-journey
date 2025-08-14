#include <stdio.h>
int main()
{
    char str[10];
    printf("\nEnter a string : ");
    gets(str);
    printf("\nOriginal String:");
    puts(str);
    char lower_str[10];
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        // if capital letter
        if (str[i] >= 'A' && str[i] <= 'Z')
            lower_str[j] = str[i] + 32;
        else // if small` letter
            lower_str[j] = str[i];
        i++;
        j++;
    }
    lower_str[j] = '\0';
    printf("\nlowercase String:");
    puts(lower_str);
    return 0;
}