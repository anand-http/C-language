#include <stdio.h>
int sum(int x);
int main()
{
    //C program to calculate the sum of first n number using function

    int a;
    printf("enter the number\n");
    scanf("%d", &a);

    printf("the sum of first %d number is %d", a, sum(a));
    return 0;
}
int sum(int x)
{
    if (x != 0)
    {
        return x + sum(x - 1);
    }
    else
    {
        return x;
    }
}
