// Write a C program to find largest among three numbers using binary minus operator.

#include <stdio.h>
void main()
{
    int a, b, c;

    char ch = 'y';
    do
    {
        printf("Enter 3 numbers\n");
        scanf("%d %d %d", &a, &b, &c);
        if (a - b > 0 && a - c > 0)
            printf("Greatest is a :%d\n", a);
        else if (b - c > 0)
            printf("Greatest is b :%d\n", b);
        else
            printf("Greatest is c :%d\n", c);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
