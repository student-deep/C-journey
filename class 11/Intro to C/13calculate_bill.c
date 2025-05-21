/*
    wap to calculate bill amount when discount is 10%, tax 18%,quantity and val of each qu. is user given
*/
#include <stdio.h>
int main()
{
    int quant;
    float tax, amt, dis, price_each_q;
    printf("\n Enter quantity : ");
    scanf("%d", &quant);
    printf("\n Enter price of each quant : ");
    scanf("%f", &price_each_q);
    amt = (quant * price_each_q);
    dis = amt * 0.1;
    amt -= dis;
    tax = amt * 0.18;
    amt += tax;
    printf("\nBill= %f", amt);

    //
    float amt2 = (quant * price_each_q) * 0.9 * 1.18;
    printf("\nBill= %f", amt2);

    return 0;
}