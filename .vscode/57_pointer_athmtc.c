#include <stdio.h>
int main()
{
    int i = 50;
    int *ptr = &i;

    printf("the value of ptr or the address of i is %d\n", ptr);
    ptr++;
    printf("the value of ptr or the address of i is %u", ptr);

    return 0;
}