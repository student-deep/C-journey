/*
array ofint contains duplicate or not
    two pointer approach
*/
#include <stdio.h>
int main()
{
    // taking array input
    int size, num = 0;
    printf("\n Enter no of digits:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter digits:");
        scanf("%d", &arr[i]);
    }

    // duplicate logic
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                printf("\nDuplicate found at index %d and %d", i, j);
                break; // out of loop
            }
        }
    }
    if (flag == 0)
    {
        printf("\nNo duplicate found");
    }
    return 0;
}