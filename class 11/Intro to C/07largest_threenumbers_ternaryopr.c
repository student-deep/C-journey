/*
find the largestof three no. ternary operator
ternary operator:
expression1 ? expression2 : expression3
: -> else
if(expression1){
    expr2
}else{
    expr3
}

int a=3,b=4,c=6
if(a>b){
    if(a>c) => a
    else =>c
}else{ // b>a
    if(b>c) =>b
    else =>C
}

*/
#include <stdio.h>
int main()
{
    int a = 3, b = 4, c = 6, largest;
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest = %d", largest);
    return 0;
}
