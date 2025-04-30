#include<stdio.h>

void checkEligibility(int age)
{
    if(age>=18) 
    printf("\nELIBIBLE");
    else
    printf("\n NOT ELIBIBLE");
}

int main()
{
    checkEligibility(17);
    checkEligibility(22);
}