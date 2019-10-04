// Write a C program to find the volume and surface area of cylinder

#include <stdio.h>
#include <math.h>

void main()
{
    float radius, height;
    float surfacearea, volume;

    char ch = 'y';
    do
    {
        printf("Enter  value for  radius and height of a cylinder\n");
        scanf("%f%f", &radius, &height);
        surfacearea = 2 * 3.14 * radius * (radius + height);
        volume = 3.14 * radius * radius * height;
        printf("Surface area of cylinder is: %.3f\n", surfacearea);
        printf("Volume of cylinder is : %.3f\n", volume);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}