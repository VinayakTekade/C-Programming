// Write a C program to find out sum of digit of a given number.

#include <stdio.h>
void main()
{
    int n, t, d, s = 0;
    char ch = 'y';
    do
    {
        printf("Enter the number \n");
        scanf("%d", &n);
        t = n;
        while (n > 0)
        {
            d = n % 10;
            s = s + d;
            n /= 10;
        }
        printf("Sum of the digits %d = %d\n", t, s);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
