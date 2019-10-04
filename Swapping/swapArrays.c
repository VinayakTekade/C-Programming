// Write a C program for swapping of two arrays

#include <stdio.h>
void main()
{
    int a[10], b[10], c[10], i;
    char ch = 'y';
    do
    {
        printf("Enter First array\n");
        for (i = 0; i < 10; i++)
            scanf("%d", &a[i]);
        printf("Enter Second array\n");
        for (i = 0; i < 10; i++)
            scanf("%d", &b[i]);
        printf("Arrays before swapping\n");
        printf("\nFirst array\n");
        for (i = 0; i < 10; i++)
        {
            printf("%d", a[i]);
        }
        printf("\nSecond array\n");
        for (i = 0; i < 10; i++)
        {
            printf("%d", b[i]);
        }
        for (i = 0; i < 10; i++)
        {

            c[i] = a[i];
            a[i] = b[i];
            b[i] = c[i];
        }
        printf("\nArrays after swapping\n");
        printf("\nFirst array\n");
        for (i = 0; i < 10; i++)
        {
            printf("%d", a[i]);
        }
        printf("\nSecond array\n");
        for (i = 0; i < 10; i++)
        {
            printf("%d", b[i]);
        }

        printf("\nDo you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
