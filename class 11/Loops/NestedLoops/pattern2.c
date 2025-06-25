/*
*
* *
* * *
* * * *
* * * * *

hint : line number = number of * in that line

*/

#include <stdio.h>
int main()
{
    int rows = 5;
    printf("\n\n");
    for (int line = 1; line <= rows; line++)
    {
        for (int j = 1; j <= line; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/*

*     => L1/ROW-0
* *   => L2/ROW-1
* * * => L3/ROW-2
rows=3
line=1; line<=3(T);line++(line=2){
    j=1;j<=1;j++(j=2) => *
    j=2;j<=1;j++(j=3) => FALSE
}
o/p :-
*
line=2; line<=3(T);line++(line=3){
    j=1;j<=2;j++(j=2) => *
    j=2;j<=2;j++(j=3) => *
    j=3;j<=2;j++(j=4) => FALSE
}
o/p :-
*
* *
line=3; line<=3(T);line++(line=4){
    j=1;j<=3;j++(j=2) => *
    j=2;j<=3;j++(j=3) => *
    j=3;j<=3;j++(j=4) => *
    j=4;j<=3;j++(j=5)(FALSE)
}
o/p :-
*
* *
* * *
line=4; line<=3(T);line++(line=4){} -> FALSE
*/