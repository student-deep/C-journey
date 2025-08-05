/*

*/
#include <stdio.h>
int main()
{
    int base_addr, k, w, lower_bound;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("\nEnter base address: ");
    scanf("%d", &base_addr); // starting add of arr
    printf("\nEnter index(k): ");
    scanf("%d", &k); // required index
    printf("\nEnter word size of one element in memory: ");
    scanf("%d", &w); // word size of one element in memory
    printf("\nEnter lower bound: ");
    scanf("%d", &lower_bound); // The index in the first element in the array
    int addr = base_addr + w * (k - lower_bound);
    printf("\nValue of %d index = %d\nAddress at %d index = %d", k, arr[k], k, addr);
    return 0;
}