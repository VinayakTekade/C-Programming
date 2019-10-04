// 9. Write a C program to find out NCR factor of a given number.

#include <stdio.h>

int factorial(int n)
{
    int i = 1;
    while (n != 0)
    {
        i = i * n;
        n = n - 1;
    }
    return i;
}

void main()
{
    int n, r, ncr;
    char ch = 'y';
    do
    {
        printf("Enter any two numbers\n");
        scanf(" %d %d", &n, &r);
        if (n > r)
        {
            ncr = factorial(n) / (factorial(r) * factorial(n - r));
            printf("The NCR factor of %d and %d is %d \n", n, r, ncr);
        }
        else
        {
            printf("Invalid Input \n");
        }
        

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
