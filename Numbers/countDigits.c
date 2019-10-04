// Write a C program to count number of digits in a given number.

#include <stdio.h>
void main()
{
    int num, r, c;
    char ch = 'y';
    do
    {
        c = 0;
        printf("enter the number");
        scanf("%d", &num);
        while (num > 0)
        {
            r = num % 10;
            c = c + 1;
            num = num / 10;
        }
        printf("the no of digits are %d \n", c);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
