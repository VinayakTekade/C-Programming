// Write a C program to find out H.C.F. of two numbers

#include <stdio.h>
void main()
{
    int i, num1, num2, min, hcf;
    char ch = 'y';
    do
    {
        hcf = 1;
        printf("Enter any two numbers to find HCF\n");
        scanf("%d%d", &num1, &num2);
        min = (num1 < num2) ? num1 : num2;
        for (i = 1; i <= min; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                hcf = i;
            }
        }
        printf("HCF of %d and %d = %d\n", num1, num2, hcf);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
