// Write a C program to convert binary number to hexadecimal number.

#include <stdio.h>
void main()
{
    int binary, hexadecimal, i, remainder;
    char ch = 'y';
    do
    {
        hexadecimal = 0;
        i = 1;

        printf("Enter the binary number\n");
        scanf("%d", &binary);
        while (binary != 0)
        {
            remainder = binary % 10;
            hexadecimal = hexadecimal + remainder * i;
            i = i * 2;
            binary = binary / 10;
        }
        printf("hexadecimal value: %d\n", hexadecimal);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
