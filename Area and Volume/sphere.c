// Write a C program to find the volume and surface area of sphere.

#include <stdio.h>
#include <math.h>

void main()
{
    float radius;
    float surfacearea, volume;

    char ch = 'y';
    do
    {
        printf("Enter radius of the sphere\n");
        scanf("%f", &radius);
        surfacearea = 4 * (3.14) * radius * radius;
        volume = (4 / 3) * (3.14) * radius * radius * radius;
        printf("Surface area of sphere is: %.3f\n", surfacearea);
        printf(" Volume of sphere is : %.3f\n", volume);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}