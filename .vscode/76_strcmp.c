#include <stdio.h>
#include <string.h>
int main()
{

    // C program to use strcmp function to compare to variable's string

    char st1[] = "hello";
    // char *st2 = "rishu";
    // char *st2 = "heli";
    char *st2 = "hello";
    int value = strcmp(st1, st2);
    printf("the value is %d", value);
    return 0;
}