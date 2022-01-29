#include <stdio.h>
int main()
{

    // C program to check whether a number is prime number or not using FOR loop

    int n, prime = 1;

    printf("enter the number to check whether it is prime or not:\n");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {

        printf("%d is a prime number", n);
    }

    return 0;
}