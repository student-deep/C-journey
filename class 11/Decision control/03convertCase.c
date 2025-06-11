/*if entered ch is in lower case then upper and vise versa*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("\n Enter any char: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n the entered char is in upper case. In lower case it is : %c", ch + 32);
        printf("\n the entered char is in upper case. In lower case it is : %c", tolower(ch));
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\nthe entered char is in lower case. In upper case it is : %c", ch - 32);
        printf("\nthe entered char is in lower case. In upper case it is : %c", toupper(ch));
    }
    else
        printf("invalid");

    return 0;
}