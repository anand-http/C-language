#include <stdio.h>
int main()
{
    //C program to calculate the sum of number occurring in n table using FOR loop

    int i, sum = 0, n;

    printf("enter the number for which table`s sum you want\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, (n * i));
        sum += (n * i);
    }
    printf("sum of %d table is %d", n, sum);
    return 0;
}