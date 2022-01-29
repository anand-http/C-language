#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    // C program to calculate average of three numbers by using function

    int x, y, z;
    printf("enter first number\n");
    scanf("%d", &x);
    printf("enter second number\n");
    scanf("%d", &y);
    printf("enter third number\n");
    scanf("%d", &z);

    printf("The average of %d,%d and %d is %f", x, y, z, average(x, y, z));
    return 0;
}

float average(int a, int b, int c)
{

    float result;
    result = (float)(a + b + c) / 3;
    return result;
}