#include <stdio.h>
int sum(int *a, int *b);

int main()
{
    //  CALL BY VALUE

    int a = 6, b = 7;

    sum(&a, &b);

    printf("the sum of %d and %d is %d", a, b, a + b);

    return 0;
}
int sum(int *a, int *b)
{
    int c;
    *a = 56;
    *b = 67;
    c = *a + *b;

    return c;
}
