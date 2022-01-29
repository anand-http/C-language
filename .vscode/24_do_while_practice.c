#include <stdio.h>
int main()
{
    // C program to print n natural number by using DO WHILE loop
    int a = 0;
    int n;
    printf("enter the number till which you want to print");
    scanf("%d", &n);
    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= n);

    return 0;
}