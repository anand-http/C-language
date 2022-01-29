#include <stdio.h>

// C program to use pointer structure

struct students
{
    char name[15];
    int class;
    int roll;
};

int main()
{
    struct students s1;
    struct students *ptr;

    ptr = &s1;

    // (*ptr).roll = 101;

    // OR

    ptr->roll = 100;

    printf("%d", s1.roll);

    return 0;
}