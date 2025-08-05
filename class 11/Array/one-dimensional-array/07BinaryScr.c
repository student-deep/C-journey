#include <stdio.h>
int main()
{
    int size, k;
    printf("\n Enter no of digits:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter digits:");
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the key you want to find:");
    scanf("%d", &k);
    int flag = 0;
    int start = 0, end = size - 1, mid = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            printf("\nFound at index : %d", mid);
            flag = 1;
            break;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (start > end && flag == 0)
    {
        printf("\nNot found");
    }

    return 0;
}