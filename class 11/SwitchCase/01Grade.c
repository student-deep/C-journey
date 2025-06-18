#include <stdio.h>
int main()
{
    char grade;
    printf("\n Enter grade:");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'O':
    case 'o':
        printf("\n outstanding");
        break;
    case 'E':
    case 'e':
        printf("\n excellent");
        break;
    case 'A':
    case '*':
        printf("\n Very Good");
        break;
    case 'B':
        printf("\n Good");
        break;
    case 'C':
        printf("\n Poor");
        break;
    case 'D':
        printf("\n Bad");
        break;
    case 'F':
        printf("\n Fail");
        break;

    default:
        printf("\nInvalid Grade");
        break;
    }
    return 0;
}