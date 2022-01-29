#include <stdio.h>
int main()
{

    // C program to take input of string and then get the length of string

    char str[100];
    printf("enter the string\n");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    printf("the length of string is %d", i);

    return 0;
}