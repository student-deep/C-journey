/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 rows = 5 , cols = 5
 */

#include <stdio.h>
int main()
{
    int rows, cols;
    printf("\nEnter rows: ");
    scanf("%d", &rows);
    cols = rows;
    for (int r = 1; r <= rows; r++) // for row (track which line we are)
    {
        for (int c = 1; c <= cols; c++) // for cols (track which column we are)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*

* * * => L1/ROW-0
* * * => L2/ROW-1
* * * => L3/ROW-2
rows=cols=3
r=1; r<=3(T);r++(r=2){
    c=1;c<=3;c++(c=2) => *
    c=2;c<=3;c++(c=3) => *
    c=3;c<=3;c++(c=4) => *
    c=4;c<=3;c++(c=5)(FALSE)
}
o/p :-
* * *
r=2; r<=3(T);r++(r=3){
    c=1;c<=3;c++(c=2) => *
    c=2;c<=3;c++(c=3) => *
    c=3;c<=3;c++(c=4) => *
    c=4;c<=3;c++(c=5)(FALSE)
}
o/p :-
* * *
* * *
r=3; r<=3(T);r++(r=4){
    c=1;c<=3;c++(c=2) => *
    c=2;c<=3;c++(c=3) => *
    c=3;c<=3;c++(c=4) => *
    c=4;c<=3;c++(c=5)(FALSE)
}
o/p :-
* * *
* * *
* * *
r=4; r<=3(F);r++(r=4){} -> FALSE    
*/