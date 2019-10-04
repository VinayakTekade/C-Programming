#include <stdio.h>
void main()
{
    
    char ch = 'y';
    do
    {
    
        printf("Do you want to continue?(y/n):");
        scanf(" %c", &ch);
    } while ((ch == 'Y') || (ch == 'y'));
}
