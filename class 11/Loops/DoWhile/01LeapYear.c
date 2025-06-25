/*
start = 2012
end = 2025
if((year%4==0 && year%100!=0)|| (year%400==0))
*/

#include <stdio.h>
int main()
{
    int start, end;
    printf("\n Enter starting year: ");
    scanf("%d", &start);
    printf("\n Enter ending year: ");
    scanf("%d", &end);
    do
    {
        printf("\nin do-while for year %d", start);
        if ((start % 4 == 0 && start % 100 != 0) || (start % 400 == 0))
        {
            printf("\n %d is a Leap year", start);
        }
        start++;
    } while (start <= end);

    return 0;
}

/*
start = 2010, end = 2013
interation-1:2010 is not leap year ; start ++ => start=2011 ; start(2011)<=end(True)
interation-2:2011 is not leap year ; start ++ => start=2012; start(2012)<=end(True)
interation-3:2012 is leap year ;  start ++ => start=2013; start(2013)<=end(True)
interation-4:2013 is not leap year ;  start ++ => start=2014; start(2014)<=end(False)
*/

/*
 Enter starting year: 2010

 Enter ending year: 2017

in do-while for year 2010
in do-while for year 2011
in do-while for year 2012
 2012 is a Leap year
in do-while for year 2013
in do-while for year 2014
in do-while for year 2015
in do-while for year 2016
 2016 is a Leap year
in do-while for year 2017
*/

/*

 Enter starting year: 2011

 Enter ending year: 2011

in do-while for year 2011
*/