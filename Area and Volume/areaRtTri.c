// Write a C program to find the area of right angled triangle.

#include <stdio.h>
void main()
{
    int base, height;
    float area;
    char ch = 'y';
    do
    {

        printf("Enter the base of Right Angle Triangle\n");
        scanf("%d", &base);
        printf("Enter the height of Right Angle Triangle\n");
        scanf("%d", &height);
        area = 0.5 * base * height;
        printf("Area of Right Angle Triangle : %f\n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}