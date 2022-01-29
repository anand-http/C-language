#include <stdio.h>
#include <math.h>

int main()
{
    // C program to calculate area of square by using library function math.h

        int a;
    printf("enter the side of square\n");
    scanf("%d", &a);

    printf("the area of square is %d", (int)pow(a, 2));

    return 0;
}
