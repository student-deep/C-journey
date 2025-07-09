#include <stdio.h>
// void hello();

// int main()
// {
//     hello();
//     hello();
//     hello();
//     hello();
//     return 0;
// }

// void hello()
// {
//     printf("\nHello world");
// }

void hello() // called function : func which is called
{
    printf("\nHello world");
}
int main() // calling function : from where other func is called
{
    hello();
    return 0;
}