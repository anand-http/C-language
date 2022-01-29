#include <stdio.h>
int main()
{
    // C program to intro of string

    // char str[] = {'r', 's', 't', 'p', '\0'};
    char str[] = "hello";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}