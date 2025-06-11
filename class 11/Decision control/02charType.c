#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("\n Press any key: ");
    scanf("%c", &ch);
    if (isalpha(ch) > 0)
    {
        printf("You have entered a alphabet");
    }
    else if (isdigit(ch) > 0)
        printf("You have entered a  digit");
    // else if (isprint(ch) > 0)
    //     printf("You have entered a printable character");
    else if (ispunct(ch) > 0)
        printf("You have entered a  punctuation");
    else if (isspace(ch) > 0)
        printf("You have entered a space");
    return 0;
}