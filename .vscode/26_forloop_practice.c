#include <stdio.h>
int main()

{

    //  PRINT N NATURAL NO. BY TAKING INPUT FROM USER

    int n;
    printf("enter n number to print\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }

    // DECREMENTING PROGRAM
    int n;

    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}