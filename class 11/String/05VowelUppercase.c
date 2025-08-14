/*
convert vowels of a sting to upper and conconents to lower case
*/
#include <stdio.h>
int main()
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);
    printf("\nOriginal String:");
    puts(str);
    char modified_str[100];
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        // vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            if (str[i] >= 'a' && str[i] <= 'z') // is in lowercase
                modified_str[j] = str[i] - 32;
            else // already in upper case
                modified_str[j] = str[i];
        }
        else // consonants
        {
            if (str[i] >= 'A' && str[i] <= 'Z') // is in upper case
                modified_str[j] = str[i] + 32;
            else // already lowercase
                modified_str[j] = str[i];
        }
        i++;
        j++;
    }
    modified_str[j] = '\0';
    printf("\nmodifiedcase String:");
    puts(modified_str);
    return 0;
}

/*

i/p : CorPorAtioN
o/p : cOrpOrAtIOn

*/