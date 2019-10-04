#include <stdio.h>
#include <math.h>
void main()
{
    float radius, area;
    char ch = 'y';
    do
    {
        printf("Enter the radius of Circle\n");
        scanf("%f", &radius);

        area = M_PI * radius * radius;
        printf("Area of Circle : %f\n", area);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}