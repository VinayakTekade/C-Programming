// Write a C program to check whether given string is palindrome or not.

#include <stdio.h>
#include <string.h>
void main()
{
    char string1[20];
    int i, length;
    int flag;

    char ch = 'y';
    do
    {
        flag = 0;

        printf("Enter a string:");
        scanf("%s", string1);

        length = strlen(string1);

        for (i = 0; i < length; i++)
        {
            if (string1[i] != string1[length - i - 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%s is not a palindrome\n", string1);
        }
        else
        {
            printf("%s is a palindrome\n", string1);
        }

        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
