// 13. Write a C program to split number into digits

#include <stdio.h>
void main()
{
    int num, temp, factor;
    char ch = 'y';
    do
    {
        factor = 1;

        printf("Enter a number:");

        scanf("%d", &num);

        temp = num;

        while (temp)
        {

            temp = temp / 10;

            factor = factor * 10;
        }

        printf("Each digits of given number are:\n ");

        while (factor > 1)
        {

            factor = factor / 10;

            printf("%d \n", (num/factor));

            num = num % factor;
        }

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
