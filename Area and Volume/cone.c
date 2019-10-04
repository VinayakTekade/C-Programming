// Write a C program to find the surface area and volume of a cone.

#include <stdio.h>
#include <math.h>

void main()
{
    float radius, height;
    float surfacearea, volume;

    char ch = 'y';
    do
    {
        printf("Enter value of radius and height of a cone \n ");
        scanf("%f%f", &radius, &height);
        surfacearea = (3.14) * radius * (radius + sqrt(radius * radius + height * height));
        volume = (1 / 3) * (3.14) * radius * radius * height;
        printf("Surface area of cone is: %.3f\n", surfacearea);
        printf(" Volume of cone is : %.3f\n", volume);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}