#include <stdio.h>
int main()
{

    // C program to check whether it is prime number or not by using while loop

    int i = 2, n, prime = 1;

    printf("enter the number to check it is prime or not:\n");
    scanf("%d", &n);

    while (i < n)
    {

        if (n % i == 0)
        {
            prime = 0;
        }
        i++;
    }
    if (prime == 0)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }

    // C program to check whether it is prime number or not by using DO while loop

    // do while say that 2 is prime number gawar kahi ka

    // int i = 2, n, prime = 1;

    // printf("enter the number to check it is prime or not:\n");
    // scanf("%d", &n);

    // do
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //     }
    //     i++;

    // } while (i < n);

    // if (prime == 0)
    // {
    //     printf("%d is not a prime number", n);
    // }
    // else
    // {
    //     printf("%d is a prime number", n);
    // }

    return 0;
}