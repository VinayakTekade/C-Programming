// Write a C program to get factorial of a given number.

#include <stdio.h>
void main()
{
    int i, f, num;
    char ch = 'y';
    do
    {
        f = 1;
        printf("Enter a number\n");
        scanf("%d", &num);

        for (i = 1; i <= num; i++)
            f = f * i;

        printf("Factorial of %d is: %d \n", num, f);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}