#include <stdio.h>
void ten(int *i)
{

    (*i) *= 10;
}
int main()
{

    int a = 5;
    printf("the value of a is %d\n", a);

    int *i = &a;

    ten(i);

    printf("the value of a after 10 times of a is %d", *i);

    return 0;
}