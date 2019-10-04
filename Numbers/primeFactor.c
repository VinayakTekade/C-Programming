// Write a C program to find out prime factor of a given number.

#include <stdio.h>
void main()
{
    int i, j, num, s;
    char ch = 'y';
    do
    {

        printf("Enter number\n");
        scanf("%d", &num);
        printf("Prime Factors of %d are ", num);
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                s = 1;
                for (j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        s = 0;
                        break;
                    }
                }
                if (s == 1)
                {
                    printf("%d,", i);
                }
            }
        }

    printf("Do you want to continue?(y/n):");
    scanf(" %c", &ch);
}
while ((ch == 'Y') || (ch == 'y'));
}
