#include <stdio.h>
#include <string.h>

// C program to use structure in array

struct students
{
    char name[10];
    int class;
    int roll;
};

int main()
{
    struct students s[7];

    strcpy(s[0].name, "anand");
    s[0].class = 12;
    s[0].roll = 5;

    strcpy(s[1].name, "anu");
    s[1].class = 12;
    s[1].roll = 5;

    strcpy(s[2].name, "rishi");
    s[2].class = 12;
    s[2].roll = 5;

    strcpy(s[3].name, "rishu");
    s[3].class = 12;
    s[3].roll = 5;

    strcpy(s[4].name, "chiku");
    s[4].class = 12;
    s[4].roll = 5;

    strcpy(s[5].name, "ankit");
    s[5].class = 12;
    s[5].roll = 5;

    strcpy(s[6].name, "aniket");
    s[6].class = 12;
    s[6].roll = 5;

    strcpy(s[7].name, "aman");
    s[7].class = 12;
    s[7].roll = 5;

    return 0;
}