// Write a C program to get last two digits of year

#include <stdio.h>
void main()
{
    int year, d;

    char ch = 'y';
    do
    {
        printf("Enter the year ");
        scanf("%d", &year);
        d = year % 100;
        printf("Last two digits of year is: %d \n", d);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
