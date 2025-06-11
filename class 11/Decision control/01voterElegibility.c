#include <stdio.h>
int main()
{
    int age;
    printf("\n Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote");
    }
    else if (age > 0 && age < 18)
    {
        printf("you are unable to vote");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}