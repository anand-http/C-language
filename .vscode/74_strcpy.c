#include <stdio.h>
#include <string.h>
int main()
{

    // C program to use strcpy function to pass the sring to other variable

    // char *st = "hello";
    char st[] = "hello"; //both are same
    char st2[50];
    strcpy(st2, st);
    printf("now the st2 is %s", st2);
    return 0;
}