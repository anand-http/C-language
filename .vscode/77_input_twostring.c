#include <stdio.h>
#include <string.h>
int main()
{

    // C program to take input of two string and use while loop

    char str1[30];
    char str2[30];
    char c;
    int i = 0;
    printf("enter the value of first string\n");
    scanf("%s", str1);
    printf("enter the value of second string character by character\n");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i] = '\0';

    printf("the value of str1 is %s\n ", str1);
    printf("the value of str2 is %s\n ", str2);

    return 0;
}