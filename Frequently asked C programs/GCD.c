#include <stdio.h>
void main()
{
    int n1, n2, i, gcd;
    char ch = 'y';
    do
    {
        printf("Enter two integers\n");
        scanf("%d %d", &n1, &n2);
        for (i = 1; i <= n1 && i <= n2; ++i)
        {
            if (n1 % i == 0 && n2 % i == 0)
                gcd = i;
        }
        printf("G.C.D of %d and %d is %d \n", n1, n2, gcd);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}