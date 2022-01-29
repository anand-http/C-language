#include <stdio.h>

// C program to print the vector dim using structure

typedef struct vectoer
{

    int x;
    int y;

} vector;
int main()
{

    vector v1, v2;

    v1.x = 5;
    v1.y = 6;

    printf("%d\n%d\n", v1.x, v1.y);

    v2.x = 7;
    v2.y = 8;
    printf("%d\n%d", v2.x, v2.y);

    return 0;
}