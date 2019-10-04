// Write a C program to find the area of any triangle.

#include <stdio.h>
#include <math.h>

void main()
{
    int s, a, b, c, area;
    char ch = 'y';
    do
    {
        printf("Enter the sides of triangle\n");
        scanf("%d %d %d", &a, &b, &c);
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of a triangle = %d \n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}