#include<stdio.h>
int main()
{
    int x=2,y=5;
    printf("\n%d < %d := %d", x,y,x<y);
    printf("\n%d > %d := %d", x,y,x>y);
    printf("\n%d = %d := %d", x,y,x==y);
    printf("\n%d != %d := %d", x,y,x!=y);
    printf("\n%d <= %d := %d", x,y,x<=y);
    printf("\n%d >= %d := %d", x,y,x>=y);
    return 0;
}

/*

2 < 5 := 1
2 > 5 := 0
2 = 5 := 0
2 != 5 := 1
2 <= 5 := 1
2 >= 5 := 0

*/