#include <stdio.h>
int main()
{
    int marks[2][3] = {10, 20, 30, 40, 50, 60};      // 2 rows, 3 cols
    int marks2[2][3] = {{10, 20, 30}, {40, 50, 60}}; // marks and marks2 both are same
    printf("\nmarks array");
    printf("\nmarks[0][0]: %d", marks[0][0]);
    printf("\nmarks[0][1]: %d", marks[0][1]);
    printf("\nmarks[0][2]: %d", marks[0][2]);
    printf("\nmarks[1][0]: %d", marks[1][0]);
    printf("\nmarks[1][1]: %d", marks[1][1]);
    printf("\nmarks[1][2]: %d", marks[1][2]);
    
    printf("\nmarks2 array");
    printf("\nmarks2[0][0]: %d", marks2[0][0]);
    printf("\nmarks2[0][1]: %d", marks2[0][1]);
    printf("\nmarks2[0][2]: %d", marks2[0][2]);
    printf("\nmarks2[1][0]: %d", marks2[1][0]);
    printf("\nmarks2[1][1]: %d", marks2[1][1]);
    printf("\nmarks2[1][2]: %d", marks2[1][2]);

    return 0;
}


/*
      0   1   2
 0 : 10  20  30
 1 : 40  50  60    
*/