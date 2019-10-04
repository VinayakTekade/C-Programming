// Write a C program to find the perimeter of a circle, rectangle and triangle.

#include <stdio.h>
#include <math.h>

void main()
{
    float radius, length, width, a, b, c, height;
    int n;
    float perimeter;

    char ch = 'y', op;
    do
    {
        printf("Enter \'c\' for Circle \nEnter \'r\' for Rectangle \nEnter \'t\' for Triangle\n");
        scanf(" %c", &op);

        switch (op)
        {
        case 'r':
            printf("Enter width and length of the rectangle \n");
            scanf("%f%f", &width, &length);
            perimeter = 2 * (width + length);
            printf("Perimeter of rectangle is: %.3f\n", perimeter);
            break;

        case 't':
            printf("Enter the size of all sides of the triangle \n");
            scanf("%f%f%f", &a, &b, &c);
            perimeter = a + b + c;
            printf("Perimeter of triangle is: %.3f\n", perimeter);
            break;

        case 'c':
            printf("Enter the radius of the circle \n");
            scanf("%f", &radius);
            perimeter = M_PI * radius * 2;
            printf("Perimeter of circle is: %.3f\n", perimeter);
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}