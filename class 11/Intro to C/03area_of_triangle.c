/*
calculate area of tri by hero's formula area = sqr(s*(s-a)(s-b)(s-c))
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("enter sida a ,b,c:");
    scanf("%f %f %f ", &a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area= %f",area);
    return 0;
}