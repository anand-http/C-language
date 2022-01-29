#include <stdio.h>

// c program containing function which count the number of postive integer in an array

int count_positive(int *arr, int n)
{

    int positive = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
    }

    return positive;
}

int count_negative(int *arr, int n)

{
    int negative = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative++;
        }
    }
    return negative;
}

void print_array(int *arr, int n)
{
    int i;
    printf("Array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[] = {2, -1, 5, 6, 0, -3};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, n);

    printf("count of positive no. is %d\n", count_positive(arr, n));
    printf("count of negative no. is %d", count_negative(arr, n));

    return 0;
}