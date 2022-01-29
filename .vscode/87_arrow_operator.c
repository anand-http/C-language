#include <stdio.h>
typedef struct student
{

    char name;
    int class;
    int roll;

} std;

int main()
{

    std s1;

    std *ptr;

    ptr = &s1;

    // (*ptr).roll = 101;

    ptr->roll = 100; // above is same as it
    printf("%d", s1.roll);

    return 0;
}