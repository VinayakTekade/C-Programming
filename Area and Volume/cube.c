// Write a C program to find the volume and surface area of cube.

#include <stdio.h>
#include <stdio.h>

void main()
{
    float side, surfacearea, volume;
    char ch = 'y';
    do
    {
        printf("Enter the length of a side \n");
        scanf("%f", &side);
        surfacearea = 6.0 * side * side;
        volume = pow(side, 3);
        printf("Surface area = %6.2f and Volume = %6.2f \n", surfacearea, volume);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
