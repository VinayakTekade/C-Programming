// Write a C program to count the total number of 7 coming between 1 to 100

#include <stdio.h>
void main()
{
    int i, j, count = 0, r = 1, n = 7;
    for (i = 1; i <= 100; i++)
    {
        j = i;
        while (j)
        {
            r = j % 10;
            if (r == n)
            {
                count++;
            }
            j = j / 10;
        }
    }
    printf(" Total Number of %d between 1 and 100 = %d \n", n, count);
}
