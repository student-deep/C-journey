#include <stdio.h>

void getcharAndPutChar()
{
    char str3[100];
    printf("\nEnter a string to take input by getchar() and print by putchar(): ");
    int i = 0;
    char ch = getchar();
    while (ch != '*')
    {
        // printf("\nEnter char: ");
        str3[i] = ch;
        i++;
        ch = getchar();
    }
    str3[i] = '\0';
    int j = 0;
    while (str3[j] != '\0')
    {
        putchar(str3[j]);
        j++;
    }
}

int main()
{

    char str2[10];
    printf("\nEnter a string to take input by gets() and print by puts(): ");
    gets(str2);
    puts(str2);
    printf("%s", str2);
    char str[100];
    printf("\nEnter a string to take input by scanf() and print by printf(): ");
    scanf("%s", str);
    printf("%s", str); // no by default space after printing
    puts(str);
    getcharAndPutChar();
    return 0;
}