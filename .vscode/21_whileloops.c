#include <stdio.h>
int main()
{

    // C program to print number 11 to 20 by while loop

    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {

            printf(" %d\n", i);
        }
        i++;
    }

    int a;
    scanf("%d", &a);

    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    int i = 0;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}