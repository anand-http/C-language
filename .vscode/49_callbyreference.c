#include <stdio.h>
// void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{

    int a = 5, b = 6;

    printf("a and b is %d and %d before swap\n", a, b);

    // wrong_swap(a, b);

    swap(&a, &b);

    printf("a and b is %d and %d after swap", a, b);

    return 0;
}
// void wrong_swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}