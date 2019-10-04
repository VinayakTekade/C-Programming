// Write a C Program to check leap year

#include <stdio.h>
void main()
{
    int y;
    char ch = 'y';
    do
    {
        printf("Enter year\n");
        scanf("%d", &y);
        if (y % 4 == 0)
        {
            if (y % 100 == 0)
            {
                if (y % 400 == 0)
                    printf("%d is a Leap Year\n", y);
                else
                    printf("%d is not a Leap Year\n", y);
            }
            else
                printf("%d is a Leap Year\n", y);
        }
        else
            printf("%d is not a Leap Year\n", y);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
