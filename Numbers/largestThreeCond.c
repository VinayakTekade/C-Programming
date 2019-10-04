// Write a C program to find largest among three numbers using conditional operator.

#include <stdio.h>
void main()
{
    int a, b, c, big;
    char ch = 'y';
    do
    {
        printf("Enter three numbers\n");
        scanf("%d %d %d", &a, &b, &c);
        big = a > b ? (a > c ? a : c) : (b > c ? b : c);
        printf("The biggest number is : %d\n", big);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
