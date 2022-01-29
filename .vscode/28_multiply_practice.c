#include <stdio.h>
int main()
{
    //C program to get table of any number by using FOR loop
    int n;
    printf("enter the number to get the table of that number:\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, (n * i));
    }

    // MULTIPLICATION TABLE FOR N NUMBER in reverse order

    int num;
    printf("enter the no. to get revrse table:\n");
    scanf("%d", &num);

    for (int i = 10; i; i--)
    {
        printf("%d*%d=%d\n", num, i, num * i);
    }

    return 0;
}