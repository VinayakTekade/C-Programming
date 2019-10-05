// Write a C program to convert octal number to hexadecimal number.

#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

void main()
{
    int octalv[] = {0, 1, 10, 11, 100, 101, 110, 111};

    int octal, temp, binary, place;
    char hex[65] = "";
    int rem;

    char ch = 'y';
    do
    {
        char hex[65] = "";
        place = 1;
        binary = 0;
        printf("Enter any octal number: ");
        scanf("%d", &octal);
        temp = octal;
        while (temp > 0)
        {
            rem = temp % 10;
            binary = (octalv[rem] * place) + binary;
            temp /= 10;
            place *= 1000;
        }
        while (binary > 0)
        {
            rem = binary % 10000;
            switch (rem)
            {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
                break;
            }

            binary /= 10000;
        }

        strrev(hex);

        printf("Octal number: %d\n", octal);
        printf("Hexadecimal number: %s \n", hex);

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
