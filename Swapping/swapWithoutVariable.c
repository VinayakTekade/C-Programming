// 2. Write a C program to swap two numbers without using third variable (3 ways).

#include <stdio.h>
void main()
{
    int a, b;
    char ch = 'y';
    do
    {
        printf("enter the numbers\n");
        scanf("%d%d", &a, &b);
        a = a - b;
        b = a + b;
        a = b - a;
        printf("After swapping a= %d,b=%d\n", a, b);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
