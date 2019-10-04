// Write a C program to find the area of trapezium

#include <stdio.h>
void main()
{
    float a, b, h;
    float area;
    char ch = 'y';
    do
    {
        printf("Enter the two bases & height of the trapezium\n");
        scanf("%f%f%f", &a, &b, &h);
        area = 0.5 * (a + b) * h;
        printf("Area of the trapezium is: %.3f /n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}