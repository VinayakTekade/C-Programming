// Write a C program to add two numbers without using addition operator.

#include <stdio.h>

int add(int a, int b)
{
    int sum, carry;
    if (b == 0)
        return a;
    else
        sum = a ^ b;        // add without carrying
    carry = (a & b) << 1;   // carry, but don’t add
    return add(sum, carry); // recursion
}

void main()
{
    int a, b, sum;
    char ch = 'y';
    do
    {

        printf("enter two numbers:");
        scanf("%d %d", &a, &b);
        sum = add(a, b);
        printf("%d\n", sum);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
