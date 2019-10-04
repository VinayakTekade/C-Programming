// Write a C program to find the area of rhombus.

#include <stdio.h>
void main()
{
    int diagonal1, diagonal2;
    float area = 0;

    char ch = 'y';
    do
    {
        printf("Enter diagonal1\n");
        scanf("%d", &diagonal1);
        printf("Enter diagonal2\n");
        scanf("%d", &diagonal2);
        area = (diagonal1 * diagonal2) / 2;
        printf("Rhombus Area: %f\n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}