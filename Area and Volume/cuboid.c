// Write a C program to find the volume and surface area of cuboids

#include <stdio.h>
#include <math.h>

void main()
{
    float b, l, h;
    float surfacearea, volume, ;

    char ch = 'y';
    do
    {
        printf("Enter value of width, length & height of the cuboids:\n");
        scanf("%f %f %f", &b, &l, &h);
        surfacearea = 2 * (b * l + l * h + h * b);
        volume = b * l * h;
        printf("Surface area of cuboids is: %.3f\n", surfacearea);
        printf(" Volume of cuboids is : %.3f\n", volume);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}