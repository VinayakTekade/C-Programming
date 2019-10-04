// Write a C program to check whether given number is palindrome

#include <stdio.h>
void main()
{
    int n, rem, p, r;
    char ch = 'y';
    do
    {
        r = 0;
        printf("Enter an integer: \n");
        scanf("%d", &n);
        p = n;

        while (n != 0)
        {
            rem = n % 10;
            r = r * 10 + rem;
            n /= 10;
        }
        if (p == r)
            printf("%d is a palindrome.\n", p);
        else
            printf("%d is not a palindrome.\n", p);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
