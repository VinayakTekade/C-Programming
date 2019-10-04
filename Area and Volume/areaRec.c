// Write a C program to find the area of rectangle

#include <stdio.h>
void main()
{
    int length, breadth, area;
    char ch = 'y';
    do
    {
        printf("Enter the Length of Rectangle\n");
        scanf("%d", &length);

        printf("Enter the Breadth of Rectangle\n");
        scanf("%d", &breadth);

        area = length * breadth;
        printf("Area of Rectangle : %d\n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}