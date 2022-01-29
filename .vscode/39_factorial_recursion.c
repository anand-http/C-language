#include <stdio.h>
int factorial(int x);
int main()
{
    // C program to calculate factorial by using function
    int a;
    printf("enter the number of which factorial you want:\n");
    scanf("%d", &a);

    printf("%d is the factorial of %d", factorial(a), a);

    return 0;
}
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}