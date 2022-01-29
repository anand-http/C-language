#include <stdio.h>
int main()
{
    // C program to check that the Letter is upper case or lowercase

    char ch;
    printf("enter the letter\n");
    scanf("%c", &ch);

    // ASCII VALUE IS 97 TO 122 IS a to z (lowercase)

    if (ch <= 122 && ch >= 97)
    {
        printf("%c is lowercase\n", ch);
    }
    else
    {
        printf("%c is Upper case\n", ch);
    }

    return 0;
}