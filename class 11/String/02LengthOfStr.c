#include <stdio.h>
int main()
{
    char str2[10];
    printf("\nEnter a string : ");
    gets(str2);
    puts(str2);
    int len = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        len++;

    }
    printf("\n length of str = %d",len);
    return 0;
}