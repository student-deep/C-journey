/*
find the smallest and largest element of an array
*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {1, 2, -3, 4, 5}, size = 5;
    int min = INT_MAX, max = INT_MIN; // INT_MAX -> largest int value in C, INT_MIN(-2,147,483,648)-> smallest int value in C;
    for (int i = 0; i < 5; i++)
    {
        // minimum
        if (arr[i] < min)
        {
            min = arr[i];
        }
        // maximum
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nMin value = %d", min);
    printf("\nMax value = %d", max);

    return 0;
}