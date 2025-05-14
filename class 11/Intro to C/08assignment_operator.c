#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 4;
    printf("\nnum1 before assignment = %d", num1);
    num1 += num2 * 5 - 7;
    /*
        num1=10
        num2*5-7= 20-7=13
        num1 += num2 *5-7 => num1 = num1+ num2*5-7;
    */
    printf("\nnum1 after assignment = %d", num1);

    return 0;
}
