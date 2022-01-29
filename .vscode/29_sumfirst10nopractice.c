#include <stdio.h>
int main()
{
    //C program to calculate some of n number using while loop

    int a = 0, sum = 0, n;

    printf("enter the number");
    scanf("%d", &n);
    while (a <= n)
    {
        sum += a;
        a++;
    }
    printf("sum of first n no. is %d\n", sum);

    //SUM OF FIRST n NUMBER using FOR loop

    int i, sum = 0, n;
    printf("enter the number\n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of first n number is %d", sum);

    // SUM OF FIRST N NUMBER BY DO WHILE LOOP

    int i = 0, sum = 0, n;
    printf("enter the number\n");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("sum of first n number is %d", sum);

    return 0;
}