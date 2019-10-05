// Write a C program to convert decimal number to octal number

#include <stdio.h>
void main()
{
    int decimal, remainder, quotient;
    int octal[100], i, j;
    char ch = 'y';
    do
    {
        i = 1;
        printf("Enter the decimal number\n");
        scanf("%d", &decimal);
        quotient = decimal;
        while (quotient != 0)
        {
            octal[i++] = quotient % 8;
            quotient = quotient / 8;
        }
        printf("octal value of decimal no %d: ", decimal);
        for (j = i - 1; j > 0; j--)
            printf("%d\n", octal[j]);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
