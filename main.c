#include <stdio.h>
#include <stdlib.h>

int addition (int a, int b)
{
    return a+b;
}

int subtraction (int a, int b)
{
    return a-b;
}

int main()
{
    printf("L'addition de a et b vaut : %i\n", addition(1,4));
    printf("La soustraction de a et b vaut : %i\n", subtraction(1,4));
    return 0;
}
