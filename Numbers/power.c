// Write a C program to find out power of a given number.

#include <stdio.h>
#include <math.h>

void main()
{
    int base, exponent, result;
    char ch = 'y';
    do
    {
        printf("Enter a base number\n");
        scanf("%d", &base);
        printf("Enter an exponent\n");
        scanf("%d", &exponent);
        result = pow(base, exponent);
        printf("%d^%d = %d", base, exponent, result);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
