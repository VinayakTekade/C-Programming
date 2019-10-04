// Write a C program to subtract two numbers without using subtraction operator.

#include <stdio.h>
void main()
{
    int a, b;
    int sum;
    char ch = 'y';
    do
    {

        printf("Enter any two integers: ");
        scanf("%d%d", &a, &b);

        sum = a + ~b + 1;

        printf("Difference of two integers: %d \n", sum);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
