#include <stdio.h>
#include<math.h>
int main()
{
    int x1, x2, y1, y2;
    float dist;
    printf("\nEnter the coordinates of the first point(x1, y1) separated by space: ");
    scanf("%d %d", &x1, &y1);
    printf("\nEnter the coordinates of the second point(x2, y2) separated by space: ");
    scanf("%d %d", &x2, &y2);
    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("\nThe distance between (%d , %d) and (%d , %d) = %f", x1, y1, x2, y2, dist);
    return 0;
}