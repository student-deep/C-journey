/*
enter N numbers and form a no using these digits
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int size, num = 0;
    printf("\n Enter no of digits:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("\n Enter digits:");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("\n i :%d", i);

        int d = arr[(size - 1) - i];
        int e = pow(10, i);
        printf("\n d :%d", d);
        printf("\n e :%d", e);

        num += d * e;
        printf("\n The number isshuhd :%d", num);
    }
    printf("\n The number is :%d", num);

    return 0;
}

/*
 BUG
 i :0
 d :3
 e :1
 The number isshuhd :3
 i :1
 d :2
 e :10
 The number isshuhd :23
 i :2
 d :1
 e :99
 The number isshuhd :
*/