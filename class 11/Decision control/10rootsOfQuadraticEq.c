/*
    ax^2+bx+c=0
    D = b^2 - 4ac
    if(D>0) root1 = (-b+sqrt(D)/2*a), root2 = (-b-sqrt(D)/2*a)
    else if(D==0) => root = -(b/2a)
    else Imaginary
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a = 1, b = -5, c = 6;
    float D, root1, root2;
    D = pow(b, 2) - 4 * a * c;
    if (D > 0)
    {
        root1 = ((-b + sqrt(D)) / 2 * a);
        root2 = ((-b - sqrt(D)) / 2 * a);
        printf("\n thetwo roots are :%f And %f",root1,root2);

    }
    else if(D==0)
    {
        printf("\n The equal roots are = %f",-(b/(2*a)));

    }
    else
    printf("\n im");
    return 0;
}