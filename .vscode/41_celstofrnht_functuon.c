#include <stdio.h>
float degree(float a);
int main()

// C program to convert Celsius to fahrenheit using user defined function
{
    int x;
    printf("enter the celsius degree to convert into fahrenheit\n");
    scanf("%d", &x);

    printf("%d celsius to fahrenheit is %f", x, degree(x));

    return 0;
}
float degree(float a)
{
    float result;
    result = (a * 9 / 5) + 32;
    return result;
}