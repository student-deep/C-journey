/*
Take n ele and print thise ele which are greater than avg
*/
#include <stdio.h>
int main()
{
    // take input
    int size;
    printf("\n Enter no of digits:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter digits:");
        scanf("%d", &arr[i]);
    }
    // calc avg(float)=>int
    int sum=0,avg=0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];

    }
    avg=sum/size;

    // printe greater
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>avg)
        printf("\n %d",arr[i]);
    }
    
    return 0;
}