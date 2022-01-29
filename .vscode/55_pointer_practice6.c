#include <stdio.h>
int callvalue(int i)
{
    int c;
    c = i *= 10;

    return c;
}
int main()
{

    int a = 5;

    printf("value of a is %d before\n", a);

    printf("value of a is %d after", callvalue(a));

    return 0;
}