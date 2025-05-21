/*
    Write a program to calculate salary of an employee,
    given his basic pay (to be entered by the user),
    HRA = 10% of the basic pay, TA = 5% of basic pay.
    Define HRA and TA as constants and use them to calculate the salary of the employee.
*/

#include <stdio.h>
int main()
{
    float basic_pay, salary;
    printf("\n Enter basic pay : ");
    scanf("%f", &basic_pay);
    salary = basic_pay + basic_pay * 0.1 + basic_pay * 0.05;
    printf("\n salary= %f", salary);
    return 0;
}