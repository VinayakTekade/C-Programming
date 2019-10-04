// Write a C program to find the area of equilateral triangle.

#include <stdio.h>
#include <math.h>

void main()
{
    float side, area;
    char ch = 'y';
    do
    {
        printf("Enter side of an equilateral triangle\n");
        scanf("%f", &side);
        area = (sqrt(3) / 4) * (side * side);
        printf("Area of equilateral triangle = %.2f sq. units\n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}