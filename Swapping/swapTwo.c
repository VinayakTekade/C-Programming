//  Write a C program to swap two numbers.

#include <stdio.h>
void main()
{
    int x, y, temp;
    char ch = 'y';
    do
    {
        printf("Enter the value of x and y\n");
        scanf("%d %d", &x, &y);
        printf("Before swapping x=%d, y=%d\n", x, y);
        temp = x;
        x = y;
        y = temp;
        printf("After swapping x=%d, y=%d\n", x, y);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
