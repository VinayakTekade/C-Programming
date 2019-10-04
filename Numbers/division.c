// Write a C Program to compute quotient and remainder

#include <stdio.h>
void main()
{
    int a, b, quotient, remainder;
    char ch = 'y';
    do
    {
        quotient = 0, remainder = 0;
        printf("Enter Numerator:");
        scanf("%d", &a);
        printf("Enter Denominator:");
        scanf("%d", &b);
        quotient = a / b;
        remainder = a % b;
        printf("Quotient : %d\n", quotient);
        printf("Remainder: %d\n", remainder);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
