/* Write a C program to check whether given number is prime number or not.*/

#include <stdio.h>
void main()
{
    int i, n, count = 0;
    char ch='y';
    do
    {
        printf("Enter a number:");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count = count + 1;
        }
        if (count == 2)
        {
            printf("it is prime \n");
        }
        else
            printf("not prime \n");

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
