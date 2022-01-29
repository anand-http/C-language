#include <stdio.h>

// C program to print the vector dim using structure

typedef struct vectoer
{

    int x;
    int y;

} vector;

vector sumvector(vector v1, vector v2)
{
    vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{

    vector v1, v2, sum;

    v1.x = 5;
    v1.y = 6;

    printf("%d\n%d\n", v1.x, v1.y);

    v2.x = 7;
    v2.y = 8;
    printf("%d\n%d\n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("x dim is %d\n y dim is %d\n", sum.x, sum.y);

    return 0;
}