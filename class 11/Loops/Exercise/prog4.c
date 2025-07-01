/*
prime composit btw m & n
prime is only divisible by 1 and itself
*/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int m = 0, n = 15;
    for (int i = m; i <= n; i++)
    {
        // prime composite logic check
        if (i == 0) // m is 0
            printf("\n 0 is neither prime nor composite");
        else if (i == 1) // m is 1
            printf("\n 1 is special number");
        else // m >=2
        {
            bool flag = false;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0) // composite
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false) // !flag = not flag = not true = false
                printf("\n%d is prime number", i);
            else
                printf("\n%d is composite", i);
        }
    }

    return 0;
}