//  Write a C program to find out L.C.M. of two numbers.

#include <stdio.h>
void main()
{
    int n1, n2, m;
    char ch = 'y';
    do
    {

        printf("Enter two positive integers: ");
        scanf("%d %d", &n1, &n2);
        if (n1 > n2)
            m = n1;
        else
            m = n2;
        while (1)
        {
            if (m % n1 == 0 && m % n2 == 0)
            {
                printf("The LCM of %d and %d is %d.\n", n1, n2, m);
                break;
            }
            ++m;
        }

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
