//WAP to check whether character enteres is integer,character, special symbol etc.
#include <stdio.h>
int main()
{
    char ch;
    printf("\nEnter Any Character :");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("\n Entered Character is Digit");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n Entered Character is Capital Letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\n Entered Character is Small Letter");
    }
    else
    {
        printf("\n Entered Character is Special Character");
    }
    return 0;
}