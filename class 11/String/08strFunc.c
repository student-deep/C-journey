#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello", str2[10];
    // copy string
    strcpy(str2, str1);
    puts(str2);
    // length of a string
    printf("\nThe length of the string %s is : %d", str2, strlen(str2));
    // concatenation
    char str3[] = "Hey", str4[] = "Deep";
    printf("\n\nString concatenation: %s",strcat(str3, str4));
    
    return 0;
}