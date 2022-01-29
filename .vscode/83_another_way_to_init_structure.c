#include <stdio.h>

// C program to initilize the structure in a simple one line
// this is another way of initilize the structure

struct students
{
    char name[10];
    int class;
    int roll;
};

int main()
{

    // we can initialize structure in a single line;

    struct students s1 =
        {

            "anand", 12, 10};

    printf("The name of student is %s\n", s1.name);
    printf("The class of student is %d\n", s1.class);
    printf("The roll no. of student is %d\n", s1.roll);

    return 0;
}