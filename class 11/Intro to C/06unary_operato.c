#include <stdio.h>
int main()
{
    int num = 5;
    printf("\n\n----------------pre-increment-------------------");
    printf("\nThe value of num = %d", num);
    printf("\nThe value of num = %d", ++num); // pre-increment
    printf("\nThe new value of num = %d", num);
    printf("\n\n----------------pre-decrement-------------------");
    printf("\n\nThe value of num = %d", num);
    printf("\nThe value of num = %d", --num); // prefix decrement
    printf("\nThe new value of num = %d", num);
    printf("\n\n----------------post-increment-------------------");
    printf("\n\nThe value of num = %d", num);
    printf("\nThe value of num = %d", num++);   // post increment
    printf("\nThe new value of num = %d", num); // post increment
    printf("\n\n----------------post-decrement-------------------");
    printf("\n\nThe value of num = %d", num);
    printf("\nThe value of num = %d", num--);   // post decrement
    printf("\nThe new value of num = %d", num); // post decrement
    return 0;
}

/*
----------------pre-increment-------------------
The value of num = 5
The value of num = 6
The new value of num = 6

----------------pre-decrement-------------------

The value of num = 6
The value of num = 5
The new value of num = 5

----------------post-increment-------------------

The value of num = 5
The value of num = 5
The new value of num = 6

----------------post-decrement-------------------

The value of num = 6
The value of num = 6
The new value of num = 5
*/