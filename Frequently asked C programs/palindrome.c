// Write a C program to check whether given number is palindrome

#include <stdio.h>
void main()
{
    int n, rem, p = 0 , r = 0;
    char ch = 'y';
    do
    {
        printf("Enter an integer: \n");
        scanf("%d", &n);
        p=n;

        while (n!=0)
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
