#include <stdio.h>
float force(float m);
int main()
{
    //C program to calculate force of attraction on a body of mass exerted by earth

    float x;
    printf("enter the value of mass in kg\n");
    scanf("%f", &x);

    printf("the force on a body in newton is %f", force(x));

    return 0;
}

float force(float m)
{
    float result;
    result = (m * 9.8);
    return result;
}
