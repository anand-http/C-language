#include <stdio.h>
int Fib(int n);

int main()
{
    // C program to calculate fibonacci sequence using recursion

    int a;
    printf("Enter the number of elements: ");
    scanf("%d", &a);
    printf("%d %d ", 0, 1);
    Fib(a - 2);
    return 0;
}

int Fib(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        Fib(n - 1);
    }
}
