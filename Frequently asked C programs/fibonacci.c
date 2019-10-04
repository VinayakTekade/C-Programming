// Write a C program to print fibonacci series of given range.

#include <stdio.h>
void main()
{
        int i, n, t1 = 0, t2 = 1, nextTerm;
    
    char ch = 'y';
    do
    {
            printf("Enter the range: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

        printf("\nDo you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}