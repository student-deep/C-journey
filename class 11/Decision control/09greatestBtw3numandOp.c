#include <stdio.h>
int main()
{
    int num1 = 7, num2 = 7, num3 = 3; // fails for this test case=>hw 
    if (num1 > num2 && num1 > num3)
        printf("%d", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d", num2);
    else
        printf("%d", num3);
    return 0;
}