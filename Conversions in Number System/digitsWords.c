// Write a C program to convert each digits of a number in words

#include <stdio.h>
void main()
{
    int n, num = 0;
    char ch = 'y';
    do
    {   
        printf("Enter a number:");
        scanf("%d" , &n);
        while (n != 0)
        {
            num = (num * 10) + (n % 10);
            n /= 10;
        }

        while (num != 0)
        {
            switch (num % 10)
            {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            }

            num = num / 10;
        }

        printf("\nDo you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
