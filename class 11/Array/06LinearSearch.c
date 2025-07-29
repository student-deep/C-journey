/*
For a given array find if k is in array or not
*/
#include <stdio.h>
int main()
{
    int size,k;
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
    int flag=0;
    for (int i = 0; i < size; i++)
    {
    
        if (arr[i]==k)
        {
            flag =1;
            printf("\n Key found at index %d",i);
            break;
        }

        
        
    }
    if (flag==0)
    {
        printf("\n Key not found");
    }
    

    return 0;
}