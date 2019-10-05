// Write a C program for addition of binary numbers

#include <stdio.h>
void main()
{
    long b1, b2;
    int i, remainder, sum[20];

    char ch = 'y';
    do
    {
        i = 0;
        remainder = 0;
        printf("Enter the first binary number\n");
        scanf("%ld", &b1);
        printf("Enter the second binary number\n");
        scanf("%ld", &b2);
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
        printf("Sum of two binary numbers:");
        while (i >= 0)
            printf("%d \n", sum[i--]);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
