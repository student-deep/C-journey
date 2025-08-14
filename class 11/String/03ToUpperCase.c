#include <stdio.h>
int main()
{
    char str[10];
    printf("\nEnter a string : ");
    gets(str);
    printf("\nOriginal String:");
    puts(str);
    char upper_str[10];
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        // if small letter
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[j] = str[i] - 32;
        else // if capital letter
            upper_str[j] = str[i];
        i++;
        j++;
    }
    upper_str[j] = '\0';
    printf("\nUppercase String:");
    puts(upper_str);
    return 0;
}