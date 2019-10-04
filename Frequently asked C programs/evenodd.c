// Write a C program to check whether given number is even or odd

#include <stdio.h>
void main()
{
    int n;
    char ch = 'y';
    do
    {
        printf("Enter a Number\n");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("it is even \n");
        }
        else
        {
            printf("it is odd\n");
        }
        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
