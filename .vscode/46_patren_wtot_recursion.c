#include <stdio.h>
int main()
{

    // C program to print * without using recursion

    int a, k = 1;
    printf("Enter the number of rows to print star (*) :\n ");
    scanf("%d", &a);

        for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k += 2;
        printf("\n");
    }

    return 0;
}