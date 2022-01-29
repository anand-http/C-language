#include <stdio.h>
int main()
{

    // CALCULATE AREA OF CIRCLE and volume of cylinder

    float r, pi = 3.14;
    int h;
    printf("enter the radius of circle and height of cylinder\n");
    scanf("%f%d", &r, &h);

    printf("the area of circle is %f\n", pi * r * r);
    printf("volume of this cylinder is %f", pi * r * r * h);
    return 0;
}