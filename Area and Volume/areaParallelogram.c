// Write a C program to find the area of parallelogram

#include <stdio.h>
void main()
{
    float base, h;
    float area;

    char ch = 'y';
    do
    {
        printf("Enter base and height of the given Parallelogram: \n ");
        scanf("%f %f", &base, &h);
        area = base * h;
        printf("Area of Parallelogram is: %.3f\n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}