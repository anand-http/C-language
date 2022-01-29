#include <stdio.h>
#include <string.h>

int main()
{

    // C program to use strcat fuction to print two variable string

    char st1[45] = "hello";
    char *st2 = "anand";
    strcat(st1, st2);
    printf(
        "now the st1 is %s", st1);
    return 0;
}