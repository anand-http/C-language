#include <stdio.h>
int main()
{
    // CONVERT CELSIUS TO Fahrenheit

    int c;
    float a = 1.8;
    int b = 32;

    printf("enter the celsius degree to convert in fahrenheit\n");
    scanf("%d", &c);

    printf("%d degree celcius is converted in %f fahrenheit", c, (c * a) + b);

    return 0;
}