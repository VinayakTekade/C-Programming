// Write a C Program to check whether a number is positive or negative.

#include <stdio.h>
void main()
{
    int a;
    char ch = 'y';
    do
    {
        printf("enter the number\n");
        scanf("%d", &a);
        if (a > 0)
            printf("it is positive\n");
        else if (a < 0)
            printf("it is negative\n");
        else
            printf("it is zero\n");

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
