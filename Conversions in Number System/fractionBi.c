// 12. Write a C program for fractional decimal to binary fraction conversion

#include <stdio.h>
void main()
{
    long double fraDecimal, fraBinary, bfractional = 0.0, dfractional, fraFactor = 0.1;
    long int dintegral, bintegral = 0;
    long int intFactor = 1, remainder, temp, i;

    printf("Enter any fractional decimal number: ");
    scanf("%Lf", &fraDecimal);

    dintegral = fraDecimal;
    dfractional = fraDecimal - dintegral;

    while (dintegral != 0)
    {
        remainder = dintegral % 2;
        bintegral = bintegral + remainder * intFactor;
        dintegral = dintegral / 2;
        intFactor = intFactor * 10;
    }

    for (i = 1; i <= 6; i++)
    {

        dfractional = dfractional * 2;
        temp = dfractional;

        bfractional = bfractional + fraFactor * temp;
        if (temp == 1)
            dfractional = dfractional - temp;

        fraFactor = fraFactor / 10;
    }

    fraBinary = bintegral + bfractional;
    printf("Binary value: %Lf \n", fraBinary);
}
