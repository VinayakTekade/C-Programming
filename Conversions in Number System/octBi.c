// Write a C program to convert octal number to binary number

#include <stdio.h>
#define MAX 1000

void main()
{
    char octalNumber[MAX];
    long int i;
    char ch = 'y';
    do
    {
        i = 0;
        printf("Enter any octal number: ");
        scanf("%s", octalNumber);

        printf("Equivalent binary value: ");
        while (octalNumber[i])
        {
            switch (octalNumber[i])
            {
            case '0':
                printf("000\n");
                break;
            case '1':
                printf("001\n");
                break;
            case '2':
                printf("010\n");
                break;
            case '3':
                printf("011\n");
                break;
            case '4':
                printf("100\n");
                break;
            case '5':
                printf("101\n");
                break;
            case '6':
                printf("110\n");
                break;
            case '7':
                printf("111\n");
                break;
            default:
                printf("\nInvalid octal digit %c \n ", octalNumber[i]);
            }
            i++;
        }
        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
