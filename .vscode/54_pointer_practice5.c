#include <stdio.h>
int main()
{

    int i = 50;
    int *a;
    int **b;

    a = &i;

    b = &a;

    printf("the value of i is %d\n", **b);

    return 0;
}