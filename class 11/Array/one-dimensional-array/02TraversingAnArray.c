/*
1. enter array size
2. take array elements as input
3. print each element
*/

#include <stdio.h>
int main()
{
    // 1.
    int size;
    printf("\nEnter Array Size(Number of elements) : ");
    scanf("%d", &size);
    //  2.
    int marks[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d array element: ", i);
        scanf("%d", &marks[i]);
    }
    // 3.
    printf("\n--------The Array is----------");
    for (int i = 0; i < size; i++)
    {
        printf("\nThe %d array element is : %d", i, marks[i]);
    }
    return 0;
}