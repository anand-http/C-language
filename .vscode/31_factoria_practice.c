#include <stdio.h>
int main()
{

    // C program to calculate the factorial of n number by using FOR loop

    int i, n, f = 1;
    printf("enter the number of which factorial you want to calculate");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("%d is the fact0rial of %d\n", f, n);

    // C program to calculate the factorial of n number by using WHILE loop

    int i = 1, n, f = 1;
    printf("enter the number of which factorial you want to calculate");
    scanf("%d", &n);
    while (i <= n)
    {
        f *= i;
        i++;
    }
    printf("%d is the fact0rial of %d\n", f, n);

    return 0;
}