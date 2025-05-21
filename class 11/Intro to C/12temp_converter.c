#include <stdio.h>
int main()
{
    float c, f, cel, fah;
    printf("\n Enter temp in C: ");
    scanf("%f", &c);
    fah = (9 * c) / 5 + 32;
    printf("\n converted temp is =  %f F", fah);
    printf("\n Enter temp in F: ");
    scanf("%f", &f);
    cel = (5 * (f - 32)) / 9;
    printf("\n converted temp is =  %f C", cel);

    return 0;
}