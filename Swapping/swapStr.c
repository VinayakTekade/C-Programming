// Write a C program for swapping of two strings

#include <stdio.h>
#include <string.h>

void main()
{
    char a[100], b[100], c[100];
    char ch = 'y';
    do
    {
        printf("Enter first string\n");
        scanf(" %s", a);
        printf("Enter second string\n");
        scanf(" %s", b);
        printf("Before Swapping\n");
        printf("First string: %s\n", a);
        printf("Second string: %s\n", b);
        strcpy(c, a);
        strcpy(a, b);
        strcpy(b, c);
        printf("After Swapping\n");
        printf("First string: %s\n", a);
        printf("Second string: %s\n", b);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
