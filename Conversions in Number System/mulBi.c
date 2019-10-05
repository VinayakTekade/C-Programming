// Write a C program for multiplication of two binary numbers

#include <stdio.h>

int binaryproduct(int b1, int b2)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;

    while (b1 != 0 || b2 != 0)
    {
        sum[i++] = (b1 % 10 + b2 % 10 + remainder) % 2;
        remainder = (b1 % 10 + b2 % 10 + remainder) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}

void main()
{
    int b1, b2, multiply;
    int digit, factor;

    char ch = 'y';
    do
    {
        factor = 1;
        multiply = 0;

        printf("Enter the first binary number: ");
        scanf("%d", &b1);
        printf("Enter the second binary number: ");
        scanf("%d", &b2);
        while (b2 != 0)
        {
            digit = b2 % 10;
            if (digit == 1)
            {
                b1 = b1 * factor;
                multiply = binaryproduct(b1, multiply);
            }
            else
                b1 = b1 * factor;
            b2 = b2 / 10;
            factor = 10;
        }
        printf("Product of two binary numbers: %d \n", multiply);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
