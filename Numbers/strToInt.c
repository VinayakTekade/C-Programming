// Write a C program to convert string to int (atoi)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char String[20];
    char ch = 'y';
    do
    {
        printf("Enter a string:");
        scanf("%s", String);
        printf("Integer: %d \n", atoi(String));

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
