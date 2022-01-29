#include <stdio.h>
int main()
{

    // C program to print the table by using array

    int arr[10], n;

    printf("enter the number of which table you want");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%dx%d=%d\n\n", n, i + 1, arr[i]);
    }

    return 0;
}