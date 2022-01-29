#include <stdio.h>
int sum(int a, int b);

int main()
{

    // C program to calculate SUM of two number by Using FUNCTION

    int c;
    c = sum(5, 6);

    scanf("%d", &c);

    printf("%d", c);

    return 0;
}

int sum(int a, int b)
{
    int z;

    z = a + b;

    return z;
}