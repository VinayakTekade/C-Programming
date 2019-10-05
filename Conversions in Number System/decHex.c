// Write a C program to convert decimal number to hexadecimal number

#include <stdio.h>
void main()
{
    int decimal, quotient, remainder;
    int i, j;
    char hexadecimal[100];

    char ch = 'y';
    do
    {
        j = 0;
        printf("Enter decimal number\n");
        scanf("%d", &decimal);

        quotient = decimal;

        while (quotient != 0)
        {
            remainder = quotient % 16;
            if (remainder < 10)
                hexadecimal[j++] = 48 + remainder;
            else
                hexadecimal[j++] = 55 + remainder;
            quotient = quotient / 16;
        }

        for (i = j; i >= 0; i--)
            printf(" %c \n", hexadecimal[i]);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
