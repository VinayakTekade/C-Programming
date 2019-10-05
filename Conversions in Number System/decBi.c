//  Write a C program to convert decimal number to binary number

#include <stdio.h>
void main()
{
    int num, decimal, remainder, base, binary;
    char ch = 'y';
    do
    {
        
        base = 1, binary = 0;
        printf("Enter a decimal integer \n");
        scanf("%d", &num);
        decimal = num;
        while (num > 0)
        {
            remainder = num % 2;
            binary = binary + remainder * base;
            num = num / 2;
            base = base * 10;
        }
        printf("Input number is = %d\n", decimal);
        printf("Its binary equivalent is = %d\n", binary);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
