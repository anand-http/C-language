#include <stdio.h>
void address(int a)
{

    printf("the address of i is %u\n", &a);
}
int main()
{

    int i = 6;

    address(i);

    printf("the address of i is %u\n", &i);

    return 0;
}