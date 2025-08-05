#include <stdio.h>
int main()
{
    int row, col;
    printf("\nEnter row:");
    scanf("%d", &row);
    printf("\nEnter col:");
    scanf("%d", &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        printf("\nWe're at row: %d", i);
        for (int j = 0; j < col; j++)
        {
            printf("\nEnter (%d, %d) position element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n-----------2D Array-----------\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}