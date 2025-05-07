/*
print values of variables of diff data types
*/
#include <stdio.h>
int main()
{
    int num;
    float salary;
    char alphabet;
    double pi;
    long int population_of_India; // camelCase, snake_case, kebab-case, SentenceCase
    char msg[10];

    printf("\n enter alphabet:");
    scanf("%c", &alphabet);
    printf("\n enter nu:");
    scanf("%d", &num);

    printf("\n enter salary:");
    scanf("%f", &salary);

    printf("\n popuation of india:");
    scanf("%ld", &population_of_India);

    printf("\nEnter the value of pi: ");
    scanf("%lf", &pi);
    printf("\nEnter the name: ");
    scanf("%s", msg);

    printf("\n%d", num);
    printf("\n%f", salary);
    printf("\n%c", alphabet);
    printf("\n%ld", population_of_India);
    printf("\n%lf", pi);
    printf("\n%s", msg);
    return 0;
}