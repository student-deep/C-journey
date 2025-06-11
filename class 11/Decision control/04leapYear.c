/*
    2003
    2003%4 !=0 => not leap year
    2004
    2004%4 = 0 && 2004 %100 !=0 => leap year
    1600
    1600%400=0=> leap year
    (year%4==0 && year % 100 !=0)||(year%400==0)
*/

#include <stdio.h>
int main()
{
    int year;
    printf("\n Enter the Year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("\n leap year");
    }
    else
        printf("\nnot a leap year");

    return 0;
}