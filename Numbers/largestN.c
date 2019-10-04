// Write a C program to find largest of n numbers.

#include <stdio.h>

void main()
{
    int i, num, n, large = 0;
    char ch = 'y';
    do
    {
        printf("How many numbers: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("\nEnter number %d: ", i + 1);
            scanf("%d", &num);
            if (num > large)
                large = num;
        }
        printf("\n\nThe Largest Number is %d \n", large);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
