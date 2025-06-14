/*
  if(marks>=0 && marks<=100){
marks>=80 -> distinction
70<=marks<=79 -> 1st class
60<=marks<=69 -> 2nd class
30<=marks<=59 -> 3rd class
else fail

}else{
    invalid
}

*/
#include <stdio.h>
int main()
{
    int marks;
    printf("\n Enter your marks in int: ");
    scanf("%d",&marks);
    if(marks>=0 && marks<=100)
    {
        if(marks>=80)
        printf("\n Distinction");
        else if(marks>=70 && marks <=79)
            printf("\n 1st class");
        else if(marks>=60 && marks <=69)
            printf("\n 2nd class");
        else if(marks>=30 && marks <=59)
            printf("\n 3rd class");
        else 
            printf("\n fail");
    }
    else 
    printf("invalid");
    return 0;
}